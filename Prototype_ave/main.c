#include <stdio.h>
#include "summy_ave.h"

int main(void)
{

    double one, two, three, three_sum, avg_of_3;
    printf("Enter three numbers >  ");
    scanf("%lf%lf%lf", &one, &two, &three);

    // Function Call
    sum_n_avg(one, two, three, &three_sum, &avg_of_3);

    // Display the output
    printf("Input Numbers: %lf, %lf, %lf\n", one, two, three);
    printf("Sum: %lf\n", three_sum);
    printf("Average: %lf\n", avg_of_3);

    return 0;
}