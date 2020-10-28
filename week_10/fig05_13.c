#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    unsigned int seed;
    
    time_t now = time(NULL);
    printf("Current time in seconds is %ld\n", now);
    
    srand(now);
    
    for(unsigned int i = 1; i <= 10; i++)
    {
        printf("%10d", 1 + (rand() % 6));
        if(i % 5 == 0)
        {
            printf("\n");
        }
    }
}
