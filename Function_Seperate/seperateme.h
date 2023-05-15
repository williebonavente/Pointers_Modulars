/*
Separates a number into three parts: a sign (+, -, or blank),
a whole number magnitude, and fractional part.
*/

#include<math.h>

void separate(double num,    // input - value to be split
              char *signup,  // output - sign of num
              int *wholep,   // output - whole number magnitude of num
              double *fracp) // output - fractional part of num
{
    double magnitude; // local variable - magnitude of num

    // Determines sign of num

    if (num < 0)
    {
        *signup = '-';
    }

    else if (num == 0)
    {
        *signup = ' ';
    }
    else
    {
        *signup = '+';
    }

    /*
    Finds magnitude of num (its absolute value ) and 
    seperates it into whole and fractional parts
    */
   magnitude = fabs(num);
   *wholep = floor(magnitude);
   *fracp = magnitude - *wholep;
}