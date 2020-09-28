// -----------------------------------------------------------------------------
// File        : problem_4-9.c
//
// Description : A program that sums a sequence of integers.
//
//               Assume that the first integer read with scanf specifies the 
//               number of values remaining to be entered. Your program should 
//               read only one value each time scanf is executed. 
//
//               A typical input sequence might be:
//
//                  5 100 200 300 400 500
//
//               where 5 indicates that the subsequent five values are to be
//               summed.
// -----------------------------------------------------------------------------
#include <stdio.h>

int main(void)
{
    int valuesToRead = 0;
    int sum = 0;
    
    // Read VALUE from the user to use as the number of values to read and sum
    printf("Enter number of values to sum: ");
    scanf("%d", &valuesToRead);
    
    // If VALUE is negative, then print an error message and exit
    if(valuesToRead < 0)
    {
        printf("Error: Invalid count (%d)\n", valuesToRead);
    }
    else
    {
        // Initialize SUM to 0
        sum = 0;
        
        // For each integer from 0 to VALUE
        //
        //          i            valuesToRead 
        //          ^                 ^ 
        // <--|--|--|--|--|--|--|--|--|--|---->
        //    0  1  2  3  4  5  6  7  8  9  
        for(int i = 0; i < valuesToRead; i++)
        {
            int value = 0;
            
            // Read the integer
            printf("> ");
            scanf("%d", &value);
            
            // Add to the running SUM
            sum += value;
        }
        
        // Print the total SUM of all integers (besides the first)
        printf("The total sum is %d\n", sum);        
    }
}