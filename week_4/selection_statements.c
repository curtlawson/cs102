#include <stdio.h>


// The if selection statement

int main(void)
{
    float winnings;
    int irs_limit_exceeded;
    
    scanf("%f\n", &winnings);
    
    if(winnings > 2000.00)
    {
        irs_limit_exceeded = 1;
    }
    else
    {
        irs_limit_exceeded = 0;
    }
    
    
    if(irs_limit_exceeded)
    {
        
    }
    
    
    
    
    if(winnings > 2000.00)
    {
        printf("Generate tax form for customer.\n");
    }
    
    return 0;
}