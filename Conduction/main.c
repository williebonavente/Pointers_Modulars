#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int drive_func(int *unknown_num);
char problem_num();
int calc_k();
int calc_H();
int calc_a();
int calc_t1();
int calc_t2();
int calc_X();
void display_ans();


// Global Scope Variables

int H, // rate of heat transfer in watts
k, // the coefficient of thermal conductivity for the particular substance
A, // cross sectional area in (square meters) 
T1, T2, // Kelvin Temperatures
X; // thickness of the conductor in meters


int main()
{
    char unknown_num; // for the problem.
    unknown_num = drive_func();

    switch (unknown_num)
    {
    case 1:
        calc_H(H);
        break;
    case 2:
        calc_k(k);
        break;
    case 3:
        calc_a(A);
        break;
    case 4:
        calc_t1(T1);
        break;
    case 5:
        calc_t2(T2);
        break;
    case 6:
        calc_X(X);
        break;
    }


    // display_ans();

    return 0;

}


// This function is to prompt the user about their givens.
int drive_func(int *unknown_num)
{

    printf("Respond to the prompts with the data known\n");
    printf("For the unknown quantity, enter a question mark (?).\n");

    // For h 
    printf("Rate of heat transfer (watts) >> ");
    scanf("%d", &H);

    // for k  
    printf("Coefficient of thermal conductivity (W/m-k) >>  ");
    scanf("%d", &k);

    // for A 
    printf("\nCross-sectional area of conductor (m^2) >> ");
    scanf("%d", &A);

    // for t1
    printf("\nTemperature on one side (K) >> ");
    scanf("%d", &T2);

    // for t2
    printf("\nTemperature on the other side (K) >> ");
    scanf("%d", &T1);

    // for X
    printf("\nThickness of conductor (m) >> ");
    scanf("%d", &X);
    
}


char problem_num() {


    switch (1)
    {
    case 1:
        if (H == '?')
        {
            calc_H(H);
        }
        break;

    case 2:
        if (k == '?')
        {
            calc_k(k);
        }
        break;
    case 3:
        if (A == '?')
        {
            calc_a(A);
        }
        break;
    case 4:
        if (T1 == '?')
        {
            calc_t1(T1);
        }
        break;
    case 5:
        if (T2 == '?')
        {
            calc_t2(T2);
        }
    case 6:
        if (X == '?')
        {
            calc_X(X);
        }
        break;

    }
}


int calc_H()
{
    H = (k * A * (T2 - T1)) / 2;
    printf("The rate of heat transfer in watts  is %d\n", H);

}

int calc_k()
{
    printf("Hello, World!\n");

}


int calc_a()
{
    printf("Hello, World!\n");

}

int calc_t1()
{

    printf("Hello, World!\n");

}

int calc_t2()
{
    printf("Hello, World!\n");

}

int calc_X()
{
    printf("Hello, World!\n");

}


void display_ans()
{

    drive_func();
    printf("H = %d\t T2 = %d K", H, T2);
    printf("k = %d\t, T1 = %d K", k, T1);
    printf("A = %d\t X = %d M", A, X);


}
