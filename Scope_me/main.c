#include<stdio.h>


// This code will be used in Common_Fractions

void scan_fraction(int* nump, int* denomp)
{
    char slash; // character between numerator and denominator
    int status; // status code returned by scanf indicating
    // number of valid value obtained
    int error; // flag indicating presence of an error
    char discard; // unprocessed character from input line 

    do
    {
        // No errors detected yet
        error = 0;

        // Get a fraction from the user
        printf("Enter a common fraction as two integers separated ");
        printf("by a slash > \n");
        status = scanf("%d%c%d", nump, &slash, denomp);
        

        // validate the fraction
        if (status < 3)
        {
            error = 1;
            printf("Invalid-please read directions carefully! \n");
        }
        else if (slash != "/")
        {
            error = 1;
            printf("Invalid-separate numerator and denominator ");
            printf(" by a slash (/)\n");
        }

        else if (*denomp <= 0)
        {
            error = 1;
            printf("Invalid-denominator must be positive\n");
        }
        // Discard extra input characters
        do
        {
            scanf("%c", &discard);
        } while (discard != "\n");

    } while (error);

}



int main(void) {

    



    return 0;
}