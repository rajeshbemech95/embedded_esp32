#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#define SIZE 5
int buffer[SIZE] ;

pthread_mutex_t lock; // mutex variable
pthread_cond_t empty, full; // condition variable  to check 
int in =0,out=0, count =0;
void* producer(void* arg)
{
    int item;
    for(int i=0; i<=10; i++)
    {
        item = rand() % 100;
        pthread_mutex_lock(&lock);

        while (count == SIZE)
        {
            pthread_cond_wait(&empty, &lock);
        }

        buffer[in] = item;
        printf("current producer buffer %d at %d\n",item,in );
        in = (in + 1) % SIZE;
        count++;

        pthread_cond_signal(&full);
        pthread_mutex_unlock(&lock);
        sleep(2);
    }
    return NULL;
}

void* consumer(void* arg)
{
    int item;
    for(int i=0; i<=10;i++)
    {
    pthread_mutex_lock(&lock);
    while (count == 0)
    {
        pthread_cond_wait(&full,&lock);
    }
    item= buffer[out];
    printf("consumercer log %d at %d\n", item,out);
    out = (out + 1) % SIZE;
    count --;

    pthread_cond_signal(&empty);
    pthread_mutex_unlock(&lock);
    sleep(2);
    }
    return NULL;
}

int main()
{
    pthread_t p,c;
    pthread_mutex_init(&lock,NULL);
    pthread_cond_init(&full,NULL);
    pthread_cond_init(&empty,NULL);

    pthread_create(&p, NULL,producer,NULL);
    sleep(1);
    pthread_create(&c, NULL,consumer,NULL);

    pthread_join(p,NULL);
    pthread_join(c,NULL);

    pthread_mutex_destroy(&lock);
    pthread_cond_destroy(&empty);
    pthread_cond_destroy(&full);
    return 0;
}