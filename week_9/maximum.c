#include <stdio.h>

// Function prototype
int maximum(int x, int y, int z);
int minimum(int x, int y, int z);
float average(int x, int y, int z);
int product(int x, int y, int z);

int main(void)
{
    // Three integers entered by the user
    int number1; 
    int number2;
    int number3;
    
    while(1)
    {
        printf("Enter three integers: ");
        scanf("%d%d%d", &number1, &number2, &number3);
        
        // number1, number2, and number3 are arguments to the maximum function call
        printf("Maximum is: %d\n", maximum(number1, number2, number3));
        printf("Minimum is: %d\n", minimum(number1, number2, number3));
        printf("Average is: %.2f\n", average(number1, number2, number3));
        printf("Product is: %d\n", product(number1, number2, number3));
    }
}

// Function maximum definition
// x, y, and z are parameters

// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
int maximum(int x, int y, int z)
{
    int max = x;
    if(y > max) 
    {
        max = y;
    }
    if(z > max)
    {
        max = z;
    }
    return max;
}

// Returns the minimum of three integers
int minimum(int x, int y, int z)
{
    int min = x;
    if(y < min)
    {
        min = y;
    }
    if(z < min)
    {
        min = z;
    }
    return min;
}

// Returns the floating-point average of three integers 
float average(int x, int y, int z)
{
    return (float)((x + y + z) / 3.0);
}

// Returns the product of three integers
int product(int x, int y, int z)
{
    return x * y * z;
}