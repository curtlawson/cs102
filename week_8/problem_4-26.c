// -----------------------------------------------------------------------------
// File        : problem_4-26.c
//
// Description : This program estimates the value of pi from the following
//               infinite series:
//
//                  pi = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ...
//
//               Print a table showing successive approximations of pi using
//               one, two, three, etc. terms of this series.
//
//                            Approximations of PI
//               -----------------------------------------------
//               |  Number of Terms             Estimated PI   |
//               -----------------------------------------------
//                
// -----------------------------------------------------------------------------
#include <math.h>
#include <stdio.h>

int main(void)
{
    float ref_pi = 3.14159265358979323846;
    float estimated_pi = 4.0;
    int sign = 0;
    float nth_term = 0;
   
    // pi = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ...
    
    // Term     Sign      Estimation 
    //                       PI(n)
    // -------------------------------
    //  0         +            4
    //  1         -         PI(0)-(4/3)  = PI(0)-(4/(3+2*0))
    //  2         +         PI(1)+(4/5)  = PI(1)+(4/(3+2*1))
    //  3         -         PI(2)-(4/7)  = PI(2)-(4/(3+2*2))
    //
    //  N      (-1)^Term    PI(N-1) + (Sign * (4 / (3 + 2*(Term-1))))

    // Print the header row(s):
    //
    //             Approximations of PI
    // -----------------------------------------------
    // |  Number of Terms             Estimated PI   |
    // -----------------------------------------------
    printf("            Approximations of PI\n");
    printf("                 %1.10f\n",ref_pi);
    printf("-----------------------------------------------\n");
    printf("   Number of Terms             Estimated PI    \n");
    printf("-----------------------------------------------\n");

    // Print the first term; it doesn't follow the general pattern
    printf("        %3d",0);
    // Print the spacing between term and PI estimation
    printf("                    ");
    // Print the current PI estimation
    printf("%1.10f    \n", estimated_pi);

    float err = fabs(estimated_pi - ref_pi);
    int n = 1;
    while(err > 0.0000000001)
    {
        // Calculate the value of PI
        sign = pow(-1, n);
        nth_term = (sign * (4.0 / (3.0 + 2.0 * (n-1))));
        estimated_pi += nth_term;
        err = fabs(estimated_pi - ref_pi);
        // Print term number
        //printf("|       %3d",n);
        // Print the spacing between term and PI estimation
        //printf("                    ");
        // Print the current PI estimation
        //printf("%1.10f   |\n", estimate/d_pi);
        n++;
    }

    // Print term number
    printf("        %3d",n-1);
    // Print the spacing between term and PI estimation
    printf("                   ");
    // Print the current PI estimation
    printf("%1.10f\n", estimated_pi);

    // Print the footer row
    printf("-----------------------------------------------\n");
    printf("\n%d terms calculated\n",n);
}