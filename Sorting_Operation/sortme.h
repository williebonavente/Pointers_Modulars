/*
Arranges arguments in ascending order.
Pre: smp and lgp are addresses of defined type double variable  
Post: variable pointed to by smp contains the smaller of the type 
double values; variable pointed to by lgp contains the larger

*/

void order(double *smp, double *lgp) // input/output 
{
    double temp; // temporary variable to hold one number during swap

    // Compares value pointed to by smp and lgp and switches if necessary

    if (*smp > * lgp)
    {
        temp = *smp;
        *smp = *lgp;
        *lgp = temp;
    }
    
}