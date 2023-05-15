/*
Reads each number from an input file and writes it
rounded to 2 decimal places on a line of an output file.
*/

#include <stdio.h>

int main(void)
{
    FILE *inp;  // pointers to input file
    FILE *outp; // pointers to output file
    double item;
    int input_status;        // status value returned by fscanf
    int number_of_items = 0; // number of items inputted

    // Prepare files for input or output
    inp = fopen("indata.txt", "r");
    outp = fopen("outdata.txt", "w");

    // Read each item, format it, and write it
    input_status = fscanf(inp, "%lf", &item);

    while (input_status == 1)
    {
        number_of_items += 1; // counting the number of input numbers.
        fprintf(outp, "%.2f\n", item);
        input_status = fscanf(inp, "%lf", &item);
    }

    fprintf(outp, "Number of items: %d", number_of_items);

    // Close the files
    fclose(inp);
    fclose(outp);

    return 0;
}