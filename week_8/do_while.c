#include <stdio.h>

int main(void)
{
    int count;
    
    printf("Program to show how the do...while statement works\n");
    printf("--------------------------------------------------\n");
    
    count = 0;
    
    printf("Example of a simple while loop...\n");
    while(count < 20)
    {
        count++;
        printf("count = %d\n", count);
    }

    printf("Example of a do...while loop...\n");
    // do 
    // statement(s)
    // while(condition);
    
    // statement => { statements }
    //              expression;
    //              function_call;
    count = 0;
    do 
    {
        // statements...
        count++;
        printf("count = %d\n", count);
        
    } while(count < 20);

    printf("Another example of a do...while loop...\n");
    printf("Enter a non-negative number: ");
    // Non-negative means any number from 0, 1, 2, ....
    scanf("%d", &count);
    if(count >= 0)
    {
        printf("Received non-negative number. Counting down...\n");
        do 
        {
            printf("count = %d\n", count);
            // Way 1
            // count--;
            
        } while(count--);
        // True means non-zero
        // False means zero
        printf("After the do...while loop, count = %d\n", count);
        
    }

}