// -----------------------------------------------------------------------------
// File        : problem_4-25.c
//
// Description : Table of Decimal, Binary, Octal, and Hexadecimal Equivalents
//
//               This program prints a table of the binary, octal, and 
//               hexadecimal equivalents of the decimal numbers in the range 
//               1 through 256.
//               
//                                  Table Title
//               ---------------------------------------------------------
//               | Dec        Binary         Octal          Hexadecimal  |                     
//               ---------------------------------------------------------
//               |  1                                                    |
//               |  .                                                    |
//               |  .                                                    |
//               |  .                                                    |
//               |  256     100000000                                    |
//               |-------------------------------------------------------|
// 
// Notes:
// 1. Display an integer as an octal number using %o
// 2. Display an integer as a hexadecimal number using %X
// 3. Converting decimal into binary:
//    Example:
//      128 in base 10 is equal to 
//         1 * 100 + 2 * 10 + 8 * 1
//         1 * 10^2 + 2 * 10^1 + 8 * 10^0
//
//      128 in base 2 (binary) is equal to ???
// 
//      2^0 = 1
//      2^1 = 2
//      2^2 = 4
//      2^3 = 8
//      2^4 = 16
//      2^5 = 32
//      2^6 = 64
//      2^7 = 128
//      2^8 = 256
//
//      1*2^7 + 0*2^6 + 0*2^5 + 0*2^4 + 0*2^3 + 0*2^2 + 0*2^1 + 0*2^0
//        1       0       0       0       0       0       0       0
//        10000000
//
//      1*2^8 + 0*2^7 + 0*2^6 + 0*2^5 + 0*2^4 + 0*2^3 + 0*2^2 + 0*2^1 + 0*2^0
//        1       0       0       0       0       0       0       0      0
//        100000000
//
// -----------------------------------------------------------------------------
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Print the Table Title
    printf("\n");
    printf("          ");
    printf("Table of Decimal, Binary, Octal, and Hexadecimal Equivalents");
    printf("          \n");
    printf("----------------------------------------" \
           "----------------------------------------\n");
    // Print the Table Header Row(s)
    printf("|  Decimal\t\tBinary\t\t\tOctal\t\tHexadecimal    |\n");
    printf("----------------------------------------" \
           "----------------------------------------\n");

    // Loop from 1 to 256
    for(int i = 1; i <= 256; i++)
    {
        // Print decimal value
        printf("|    %3d", i);

        // Print the spacing between decimal and binary
        printf("              ");
        
        // Convert current number to binary and print the binary value
        //
        // Extract the binary digits from the number by dividing successively
        // by smaller and smaller powers of two, from 256 to 1.
        int current_i = i;
        for(int exponent = 8; exponent >= 0; exponent--)
        {
            int power_of_two = pow(2,exponent);
            int bit = current_i / power_of_two;
            current_i = current_i - (bit * power_of_two);
            printf("%d", bit);
        }

        // Print the spacing between binary and octal
        printf("                  ");
        
        // Print octal value
        printf("%3o",i);

        // Print the spacing between octal and hexadecimal
        printf("              ");
        
        // Print hexadecimal value
        printf("0x%04X       |",i);

        // End the current line
        printf("\n");
    }
    // Print Table Footer Row
    printf("----------------------------------------" \
           "----------------------------------------\n");
}


