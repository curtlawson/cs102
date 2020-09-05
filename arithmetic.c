//
// 2.5
// [] Arithmetic Operations
//      Addition
//      Subtraction
//      Multiplication
//      Division
//      Modulo (Remainder)
// [] Rules of Operator Precedence
// [] Good Programming Practices
//      Parentheses for Clarity
//      Multi-Lined Statements
#include <stdio.h>

int main(void)
{
    int a, b, c;
    int i, j, k;
    int u, v, w;
    int x, y, z;
    int sum;
    int diff;
    int product;
    int quotient;
    int remainder;
    
    // [] Arithmetic Operations
    //      Addition
    //      Subtraction
    //      Multiplication
    //      Division
    //      Modulo (Remainder)    
    x = 10;
    y = 100;
    z = 1000;
    sum = x + y + z;
    printf("sum of x + y + z is %d\n", sum);
    diff = z - y - x;
    printf("z - y - x is %d\n", diff);
    int intermediate_value = x - y;
    diff = intermediate_value - z;
    printf("x - y - z is %d\n", diff);
    printf("intermediate value is %d\n", intermediate_value);    
    int add_sub;
    add_sub = x + y - z - x;
    printf("x + y - z - x = %d\n", add_sub);

    i = 3;
    j = 5;
    k = 7;


    printf(" 48 / 8 % 4 = %d\n", 48/8%4);
    // A = B x C       A = B * C;
    // A = BC          no equivalent - looks like a variable
    // A = B(C)        no equivalent - looks like a function call
    product = i * j * k;
    printf("i * j * k = %d\n", 
           product);
    
    // 7 / 3
    //              7
    // quotient =   -
    //              3
    //    ___
    // 3 | 7 
    quotient = k / i;
    printf("k / i = %d\n", quotient);
    quotient = i / k;
    printf("i / k = %d\n", quotient);
    quotient = k / i / j;
    
    remainder = k % i;
    printf("k mod i = %d\n", remainder);

    float temp;
    temp = 23.0 / 10.0;
    printf("23 / 10 is %f\n", temp);
    printf("23 mod 10 = %d\n", 23 % 10);

    // 1  2  3  4  5  6  7  8  9  10  11  12  
    int hours = 1416;
    printf("hour on clock face = %d\n", hours % 12);
    
    // PEMDAS
    // P - Parentheses
    // E - Exponents
    // M - Multiplication
    // D - Division
    // A - Addition
    // S - Subtraction
    
    // Parentheses
    // Multiplication, Division, Modulo (Remainder)
    // Addition, Subtraction
    // Assignment
    a = 5 + 6 * 2;
    printf("a = %d\n",a);
    a = (5 + 6) * 2;
    printf("a = %d\n",a);
    a = 5 / 2 + 6 * 2;
    printf("a = %d\n",a);
    a = 5 / (2 + 6) * 2;
    printf("a = %d\n",a);
    a = 15 / (2 + 6) * 2;
    printf("a = %d\n",a);
    a = 15 / 2 + 6 * 2 * 19 % 4;
    //    7    + 12    * 19 % 4
    //    7    + 228        % 4
    //    7    +              0
    printf("a = %d\n",a);
    a = 15 / (2 + 6) * 2 * (19 % 4);
    //  15 /    8    * 2 *     3
    //          1    * 2 *     3
    //                 2 *     3
    //                         6
    printf("a = %d\n",a);
    
    a = 15 - 7 / 2 + 6 * 2 * 19 - 3 % 4;

    a = 15 - (7 / 2) + (6 * 2 * 19) - (3 % 4);
    
    
    //  15 -   3   + 6 * 2 * 19 - 3 % 4
    //  15 -   3   +   12  * 19 - 3 % 4
    //  15 -   3   +      228   - 3 % 4
    //  15 -   3   +      228   -   3 
    //     12      +      228   -   3
    //            240           -   3
    //                         237
    printf("a = %d\n",a);
    a = (15 - 7) / (2 + 6 * 2) * (19 - 3) % 4;
    //      8    / (2 + 6 * 2) * (19 - 3) % 4
    //      8    / (2 +   12 ) * (19 - 3) % 4
    //      8    / (  14     ) * (19 - 3) % 4
    //      8    / (  14     ) * (   16)  % 4
    //           0             * (   16)  % 4 
    //                         0          % 4
    //                                    0
    printf("a = %d\n",a);


    // Sample expressions
    // 1. Mean / Average
    //    
    //         x1 + x2 + ... + xn
    //    m = --------------------
    //                 n
    //
    // Given a set of final grades: 65, 70, 71, 73, 73, 76, 83, 86, 88, 91, 94, 98
    // What is the mean, or average, grade?
    int m = 65 + 70 + 71 + 73 + 76 + 83 + 86 + 88 + 91 + 94 + 98 / 12;
    printf("(Incorrect) Average Grade is %d\n", m);
    m = (65 + 70 + 71 + 73 + 76 + 83 + 86 + 88 + 91 + 94 + 98) / 12;
    printf("Average Grade is %d\n", m);

    // 2. Linear Interpolation
    // 
    //                      (y1 - y0)
    //    y = y0 + (x - x0) ---------
    //                      (x1 - x0)     
    //
    //         ^
    //     y1  |                *
    //         |
    //         |
    //      y  |---------o
    //         |         |
    //     y0  |   *     |
    //         |         |
    //     ----|--x0-----------x1---->
    //                   x
    //
    // We have a line in the plane defined by two points: 
    //   (x0, y0) = (3, 2)
    //   (x1, y1) = (15, 7)
    // 
    // Given an x value of 7, what is the value of y along the line?
    //
    int x0 = 3, y0 = 2;
    int x1 = 15, y1 = 7;
    x = 7;
    y = y0 + x - x0 * y1 - y0 / x1 - x0;
    printf("(Incorrect) Interpolated y is %d\n", y);
    y = y0 + 
        ((x - x0) * 
         (y1 - y0) / (x1 - x0));
        
    printf("(Incorrect) Interpolated y is %d\n", y);
    y = y0 + ((x - x0) * ((y1 - y0) / (x1 - x0)));
    printf("Interpolated y is %d\n", y);
    y = y0 + (x - x0) * ((y1 - y0) / (x1 - x0));
    printf("Interpolated y is %d\n", y);
    
    float xx0 = 3.0, yy0 = 2.0;
    float xx1 = 15.0, yy1 = 7.0;
    
    float xx = 7.0;
    float yy = yy0 + xx - xx0 * yy1 - yy0 / xx1 - xx0;
    yy = yy0 + (xx - xx0) * ((yy1 - yy0) / (xx1 - xx0));
    printf("Interpolated y is %f\n", yy);    

    // 3. Combinations 
    //
    // nCr =  ____ n!____
    //         (n-r)! r!
    //
    // A committee of 3 is to be formed from a group of 20 people. How 
    // many different committees are possible?
    //
    //         20 * 19 * 18
    // 20c3 = --------------
    //           3 * 2 * 1
    int nCr = (20 * 19 * 18 * 17 * 16 * 
               15 * 14 * 13 * 12 * 11 * 
               10 * 9 * 8 * 7 * 6 * 5 * 
               4 * 3 * 2 * 1) / 
              (17 * 16 * 15 * 14 * 13 * 12 * 11 * 10 *
                9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1) * 
              (3 * 2 * 1);
    printf("(Reaaaaaally incorrect) nCr = %d\n", nCr);
    
    nCr = 20 * 19 * 18 / 3 * 2 * 1;
    printf("(Incorrect) nCr = %d\n", nCr);
    
    nCr = (20 * 19 * 18) / (3 * 2 * 1);
    printf("(Incorrect) nCr = %d\n", nCr);
    
    // 1 bit = 0 or 1
    // 1 byte = 8 bits
    // 32-bits = 4 bytes
    // 64-bits = 8 bytes
    // 
    // nCr  [        |        |        |        ]




    return 0;
}