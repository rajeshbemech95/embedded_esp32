#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

sem_t sem;
void* producer(void* arg)
{
    while(1)
    {
        printf("produced thread running\n");
        sleep(1);
        printf("Producer: signal\n");
        sem_post(&sem);
    }
}
void* consumer(void* arg)
{
    while(1)
    {
        sem_wait(&sem);
        printf("consumer thread running\n");
        sleep(1);
        printf("consumer: signal\n");
        
    }
}

int main()
{
    pthread_t t1,t2;

    sem_init(&sem, 0,0);
    pthread_create(&t1, NULL,producer,NULL);
    // sleep(1);
    pthread_create(&t2, NULL,consumer,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
}