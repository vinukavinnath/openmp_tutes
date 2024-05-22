#include<stdio.h>
// Must be included as library has all declarations of pthread related methods
#include<pthread.h>


// Create the thread function that must be called inside the thread
void* thread_function(void* args)
{
    printf("%s\n",args);
}

int main()
{
    // Defining variables that must be passed to thread function.
    char *msg01="This is thread 01";
    char *msg02="This is thread 02";

    // Define thread IDs
   pthread_t thread_01,thread_02;


    // Create threads using pthread_create() method
    // 1st parameter - Thread ID that must be created
    // 2nd parameter - Thread attributes. Better to leave as NULL
    // 3rd parameter - Pointer to the previously defined thread function
    // 4th parameter - Arguments that must be passed to thread function
   pthread_create(&thread_01,NULL,thread_function,(void*)msg01);
   pthread_create(&thread_02,NULL,thread_function,(void*)msg02);

   // Notifying main thread to wait until newly created threads finish their execution
   pthread_join(thread_01,NULL);
   pthread_join(thread_02,NULL);

   printf("Thread execution was successful!");
}

