
#include <stdio.h>
#include <omp.h>

int main(){
    double time=omp_get_wtick();
    #pragma omp parallel
    {
        printf("Hello There! We are measuring time to execute this parallel region!\n");
    }

    printf("\n----------------------------\n");
    printf("You have spent %f seconds to execute parallel region",time);
    printf("\n----------------------------\n");
}
