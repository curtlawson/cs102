#include <stdio.h>

int main(void)
{
    // Counter-controlled iteration
    // 1. The name of a control variable
    // 2. The initial value of the control variable
    // 3. The increment/decrement by which the control variable changes
    // 4. The condition that tests for the final value of the control variable
    int count = 0;
    while(count < 10)
    {
        printf("count = %d\n", count);
        count++;
    }
    
    for(int i = 0; i < 10; i++) 
    {
        printf("i = %d\n", i);
    }
    
    // for encountered
    // int i = 0 is executed
    // i < 10 is assessed as true
    // loop body executes once:
        // prints "i = 0"
    // i++ is executed (i is now 1)
    // i < 10 is assessed as true
    // loop body executes once:
        // prints "i = 1"

    // .... 
    
    // i++ is executed (i is now 9)
    // i < 10 is assessed as true
    // loop body executes once:
        // prints "i = 9"
    // i++ is executed (i is now 10)
    // i < 10 is assessed as false
    // exit loop
 
    // Count down from 5 to 0 (or 1?)
    for(int foo = 5; foo >= 0; foo--)
    {
        printf("foo = %d\n", foo);
    }
    
    
}
