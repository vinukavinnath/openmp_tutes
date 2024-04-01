#include <stdio.h>
#include <omp.h>

int main(){
        #pragma omp parallel for
        for(int i=0;i<10;i++) {
            int thread_id=omp_get_thread_num();
            printf("Thread id %d => %d\n",thread_id,i);
        }
}
