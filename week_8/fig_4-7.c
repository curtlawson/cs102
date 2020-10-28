#include <stdio.h>

int main(void)
{
    // [  aCount   ]  
    // 
    // *---------------------------|-------------------------*
    // ^                           0                         ^
    // |                                                     |
    // |----- min_int                             max_int ---|
    //
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;
    
    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");
    

    // Original algorithm:
    // --------------------------------------------------
    // Loop until user enters EOF
        // Based on user input of a letter grade
            // Increment A count
            // Increment B count
            // Increment C count
            // Increment D count
            // Increment F count; or
            // Tell the user that invalid data was entered
    // Print the number of As, Bs, Cs, Ds, and Fs
    

    // Updated algorithm:
    // 
    // Require that the user enter a numerical grade
    // rather than a letter grade. Print the number 
    // of As, Bs, etc. as well as the average grade.
    //
    // Additional tasks:
    // - Accept numerical input
    // - Maintain an average grade
    // - Print the average when done
    // --------------------------------------------------
    // Loop until user enters **EOF**
        // Based on user input of a **letter grade**
            // Increment A count
            // Increment B count
            // Increment C count
            // Increment D count
            // Increment F count; or
            // Tell the user that invalid data was entered
        // ** Maintain an average grade **

    // Print the number of As, Bs, Cs, Ds, and Fs
    // ** Print the average grade **

    // TODO: Change input method to accept numbers - probably a scanf...
    // TODO: Either 
    //          1) Change the existing switch statement somehow...
    //          2) Keep the current switch statement, but correctly
    //             fill in the 'grade' variable so that it still functions.
    // TODO: Put in the necessary steps to calculate an average; add necessary
    //       variables and calculations
    // TODO: Print the average grade
    //
    variable_type numerical_grade;
    
    // Convert numerical_grade into grade. Or update grade based on 
    // numerical_grade
    int grade; // placeholder for current grade
    while((grade = getchar()) != EOF)
    {
        // [  stdin buffer ]    <----- keyboard input 'A\n'
        switch(grade)
        {
            case 'A':
            case 'a':
                aCount++;
                break;
            case 'B':
            case 'b':
                bCount++;
                break;
            case 'C':
            case 'c':
                cCount++;
                break;
            case 'D':
            case 'd':
                dCount++;
                break;
            case 'F':
            case 'f':
                fCount++;
                break;
            case '\n':
            case '\r':
            case '\t': //???
            case ' ':
                break;
            default:
                printf("Incorrect letter grade entered (%d)\n", grade);
                printf("Enter a new grade: ");
                break;
        }
    }
    printf("\n");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
}


