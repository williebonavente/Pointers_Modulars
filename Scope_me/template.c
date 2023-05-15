#include<stdio.h>
#define MAX 950
#define LIMIT 200


void one(int anarg, double second); // prototype 1
int fun_two(int one, char anarg); // prototype 2

int main(void) {

    int localvar;
    return 0;
}

// end main

void one(int anarg, double second) // header 1 
{
    int onelocal; // local 1
}
// end one

int fun_two(int one, char anarg) // header 2
{
    int localvar; // local 2
    return;
}
// end two