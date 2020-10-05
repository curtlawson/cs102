// Topics
// 1. do/while
// 2. switch
// 3. break/continue
// 4. logical operators
// 5. structured programming
#include <stdio.h>

int main(void)
{
    
    printf("Program to show how the switch statement works\n");
    printf("--------------------------------------------------\n");
    
    // if(condition)
    // {
    //    statement(s) 
    // }
    
    // if(condition)
    // {
    //    statement(s)
    // }
    // else
    // {
    //    statement(s)     
    // }
    
    // if(condition_a)
    // {
    //    statement(s)
    // }
    // else if(condition_b)
    // {
    //
    // }
    // else if(condition_c)
    // {
    //    
    // }
    // else
    // {
    //      
    // }
    
    // switch(variable)
    // {
    //     case value_1:
    //       statement(s)
    //       break;
         
    //     case value_2:
    //       statement(s)
    //       break;
          
    //     ...
        
    //     default:
    //       statement(s)
    //       break;
    // }
    
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