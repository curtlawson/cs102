#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* inputFile;
    
    inputFile = fopen("numbers.csv", "r");
    if(inputFile == NULL)
    {
        printf("Could not open file.\n");
        exit(0);
    }
    
    int n;
    float sqrt_n;
    int square_n;
    int line = 1;

    // Read the contents of the file
    while(feof(inputFile) == 0)
    {
        // Read the next line of the file
        fscanf(inputFile, "%d,%f,%d", &n, &sqrt_n, &square_n);
        printf("Line %d\n", line++);
        printf("    N = %d, sqrt(N) = %f, N^2 = %d\n", n, sqrt_n, square_n);
    }
    printf("End of file reached.\n");

    fclose(inputFile);
}
