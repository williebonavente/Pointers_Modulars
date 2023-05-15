#include <stdio.h>


int sum(int a, int b, int* cp)
{

    *cp = a + b;
    return *cp;

}


int main(void)
{
    int x, y, z;

    x = 7;
    y = 2;


    // printf("   x   y   z \n\n");

    z = sum(y, x, &z);
    printf("Sum -> %d\n", z);

    sum(y, x, &z);
    printf("Sum -> %d\n", z);

    sum(z, y, &x);
    printf("Sum -> %d\n", x);

    sum(z, z, &x);
    printf("Sum -> %d\n", x);

    sum(y, y, &y);
    printf("Sum -> %d\n", y);


    return 0;
}