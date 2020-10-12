// Topics
// C Standard Library Functions (math, random numbers, time)
// Function prototypes
// Function definitions
// Header files
// Parameter Lists
// Passing arguments by value versus by reference
//#include <math.h>
#include <stdio.h>
#include <math.h>

void print_welcome_message(int week_number);

// return-type name(parameter-list|void)
// {
//     body    
// }

void print_welcome_message(int week_number)
{
    printf("Welcome to Week %d: ", week_number);
    switch(week_number)
    {
        case 9:
            printf("Functions, Part One\n");
            break;
        case 10:
            printf("Functions, Part Two\n");
            break;
        default:
            printf("Topic Unknown\n");
            break;
    }
}


int main(void)
{
    int week = 9;
    
    print_welcome_message(week);
    
    printf("Square Root of the Week is %.2f.\n", sqrt(week));

    // Ceiling of a number is the next highest integer
    // Ceiling of 1.2 is 2
    // Ceiling of 1 is 1
    printf("Ceiling of 1.2 is %f.\n", ceil(1.2));
    printf("Ceiling of 1 is %f.\n", ceil(1));
    // Floor of a number is the next lowest integer
    // Floor of 1.2 is 1
    // Floor of 1 is 1
    printf("Floor of 1.2 is %f.\n", floor(1.2));
    printf("Floor of 1 is %f.\n", floor(1));
    
    
}