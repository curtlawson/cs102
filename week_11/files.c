#include <stdio.h>

// What is a File? 
//------------------------------------------------------------------------------
//
// A file is a sequential stream of bytes...
//   int is 4 bytes (4 * 8 bits/byte = 32 bits)
//   char is 1 byte (1 * 8 bits/byte = 8 bits)
//   float is 4 bytes
//   long is 8 bytes (8 * 8 bits/byte = 64 bits)
//   double is 8 bytes
//
// A file of size N can be thought of as:
//
// Offset    0   1   2   3   4   5   6   7   8      n-1
//   Byte  [   |   |   |   |   |   |   |   |   |...|   ]
//
// What is a Stream?
//------------------------------------------------------------------------------
// A stream represents a data flow or a communication channel.
// 3 Common Streams
//      1. stdin / Standard Input
//      2. stdout / Standard Output
//      3. stderr / Standard Error
// 
// printf, scanf write to or read from standard input, respectively
// fprintf, fscanf write to or read from a file, respectively
// fputc, fgetc write or read a single character from a file, respectively
// fwrite and fread write or read a buffer/array of characters from or to a file

// FILE* 
// open a file; returns a FILE* 
// fprintf and fscanf require a FILE* to write to or read from a file
// all other file I/O functions require a FILE*
// close a file specified by a FILE*


int main(void)
{
    FILE* outputFile;
    // fopen
    outputFile = fopen("hello.txt", "a");
    fprintf(outputFile, "Hello world!\n");
    fclose(outputFile);
    
    int a,b,c;
    outputFile = fopen("hello.txt", "r");
    fscanf(outputFile, "%d,%d,%d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    fclose(outputFile);
    
    // Modes
    // r, r+, w, w+, a, a+
    // See Figure 11.5 in textbook, page 448
    char first[16];
    char last[16];
    int age;
    outputFile = fopen("names.txt", "r");
    fscanf(outputFile, "%[^,],%[^,],%d", first, last, &age);
    printf("%s %s, Age %d\n", first, last, age);
    fclose(outputFile);
}
