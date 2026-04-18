#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int buffer =0;
pthread_mutex_t lock;
void* producer(void* arg)
{
    for(int i=0; i<=5; i++)
    {
        pthread_mutex_lock(&lock);
        buffer = i;
        printf("preoducer log %d\n", buffer);
        pthread_mutex_unlock(&lock);
        sleep(2);
    }
    return NULL;
}

void* consumer(void* arg)
{
    for(int i=0; i<=5;i++)
    {
    pthread_mutex_lock(&lock);
    printf("consumercer log %d\n", buffer);
    pthread_mutex_unlock(&lock);
    sleep(2);
    }
    return NULL;
}

int main()
{
    pthread_t p,c;
    pthread_mutex_init(&lock,NULL);
    pthread_create(&p, NULL,producer,NULL);
    sleep(1);
    pthread_create(&c, NULL,consumer,NULL);

    pthread_join(p,NULL);
    pthread_join(c,NULL);
    return 0;
}