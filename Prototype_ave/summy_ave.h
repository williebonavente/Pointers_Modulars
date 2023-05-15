// Prototype Function to compute Average and Sum

void sum_n_avg(double num1,
               double num2,
               double num3,
               double *sump,
               double *ave)
{
    *sump = num1 + num2 + num3;
    *ave = *sump / 3;
}