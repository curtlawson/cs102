#include <stdio.h>

// Increment and Decrement operators
int main(void)
{
    int i = 0;
    int j = 0;
 
    printf("Starting out, i = %d\n", i);   
    i = i + 1;
    printf("After executing i = i + 1, i = %d\n", i);
    
    i += 1;
    printf("After executing i += 1, i = %d\n", i);
    
    // Increment operator, using post-fix notation
    //   This is equivalent to i = i + 1 or i += 1
    i++;
    printf("After executing i++, i = %d\n", i);
    

    // Increment operator, using pre-fix notation
    //   This is equivalent to i = i + 1 or i += 1
    ++i;
    printf("After executing ++i, i = %d\n", i);
    
    
    printf("------------------\n");
    printf("i = %d\n", i);
 
    printf("Demonstrating post-fix increment\n");
    printf("i = %d\n", i++);
    printf("i = %d\n", i);
    
    printf("------------------\n");
    printf("Okay, now i = %d\n", i);

    printf("Demonstrating pre-fix increment\n");
    printf("i = %d\n", ++i);
    printf("i = %d\n", i);
    
    printf("Demonstrating pre-fix decrement\n");
    printf("i = %d\n", --i);
    printf("i = %d\n", i);
    i--;
    i--;
    i--;
    printf("After three post-fix decrements i = %d\n", i);

    j = 0;
    while(j < 10)
    {
        printf("j = %d\n", j++);
    }
    
    
    
    
    i = 0;                                        // i = 0
    while(++i < 20)                               // i = 1 after ++i
                                                  // (i < 20) <==> (1 < 20)

    i++  ~ "Use then increment"
    ++i  ~ "Increment then use"

    i = 0;                                        // i = 0
    while(i++ < 20)                               // (i < 20) <==> (0 < 20)      // 2 < 20 
                                                  // i = 1                       // i = 3
                                                  // 
    {
        printf("Still counting i (%d)\n", i++);   // "Still counting i (1)"
                                                  // i = 2
    }
    printf("i = %d\n");
    
    // what is the value of i
    // how many times did the loop execute
 
 
    
    
    
    
}