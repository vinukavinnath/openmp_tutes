#include<stdio.h>
#include<pthread.h>

void* thread_function(int* args)
{
    int num1=args[0];
    int num2=args[1];
    int total=num1+num2;
    printf("Total is: %d\n",total);
}

int main()
{
    // Two arrays used to pass numbers for two separate threads
    int array1[]={5,10};
    int array2[]={15,20};

    pthread_t thread1,thread2;

    pthread_create(&thread1,NULL,thread_function,(int*)array1);
    pthread_create(&thread2,NULL,thread_function,(int*)array2);

    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);

}
