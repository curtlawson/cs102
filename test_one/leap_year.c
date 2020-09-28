#include <stdio.h>


// How to determine whether a year is a leap year
// To determine whether a year is a leap year, follow these steps:
//
// 1. If the year is evenly divisible by 4, go to step 2. 
//    Otherwise, go to step 5.
// 2. If the year is evenly divisible by 100, go to step 3. 
//    Otherwise, go to step 4.
// 3. If the year is evenly divisible by 400, go to step 4. 
//    Otherwise, go to step 5.
// 4. The year is a leap year (it has 366 days).
// 5. The year is not a leap year (it has 365 days).
int main(void)
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("How many years? ");
    int count;
    scanf("%d", &count);
    int max_year = year + count;
    int is_leap_year;
    while(year < max_year)
    {
        is_leap_year = 0;
        if(year % 4 == 0)
        {
            if(year % 100 == 0)
            {
                if(year % 400 == 0)
                {
                    is_leap_year = 1;
                }
            }
            else
            {
                is_leap_year = 1;
            }
        }
        
        if(is_leap_year)
            printf("%d is a leap year\n", year);
        else
            printf("%d is not a leap year\n", year);


        year++;
    }

}