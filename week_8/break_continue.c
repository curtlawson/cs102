#include <stdio.h>

int main(void)
{
    // break 
    // The break statement will exit the current loop or switch statement and 
    // cause execution to continue at the next statement following the loop.
    int number = 0;
    int sum = 0;
    int count = 0;
    
    float average = 0.0;
    int somethingBadHappened = 0;
    
    while(number != -1)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number == -1)
        {
            // Exit the loop immediately.
            break;
        }
        sum += number;
        count++;
        average = (float)sum/count;
        printf("Current average is %.2f\n", average);
        
        if(average < 75)
        {
            somethingBadHappened = 1;
            break;
        }
    }
    printf("\nFinal average is %.2f\n", average);    

    if(somethingBadHappened)
    {
        printf("Class average is too low...\n");
    }
    
    
    int integerAverage = (int)average;
    int i;
    for(i = 0; i < 100; i++)
    {
        if(i > integerAverage)
        {
            break;
        }
    }
    printf("i = %d\n", i);

    // continue
    // The continue statement will end the current iteration and cause 
    // execution to begin again at the beginning of the loop, thereby skipping
    // any subsequent instructions from this point forward until the end of
    // the loop.
    count = 0;
    number = 0;
    sum = 0;
    while(count < 10)
    {
        printf("Enter number #%d: ", count+1);
        scanf("%d", &number);
        if(number < 0)
        {
            continue;
        }
        sum += number;
        count++;
        average = (float)sum/count;
        printf("Current average is %.2f\n", average);
    }
    
    // while(true)
    //  try to open the file
    //      read each line of the file
    //      check to see that the line is formatted correctly
    //          if not, ???
    //      if valid line
        //      process the line
        //          inspect each comma-separated value in the line
            //          switch(value)
            //              case X
            //              case Y
            //              case Z
            //      prepare the output file for writing
        //            
}