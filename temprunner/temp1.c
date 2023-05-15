#include<stdio.h>


int main(void) {

    int count;

    printf("Enter Number > ");
    scanf("%i", &count); 
    
    for (int i = 1; i <= count; i++)
    {
        printf("%i\n",i); 
        
    }
    

    return 0;
}