// 
// File        : encrypt.c
//
// Description : This program encrypts a 4 digit integer using a custom 
//               encryption scheme.
//
// Requirements: All data is transmitted as 4-digit integers
//               Read a 4-digit integer entered by the user
//               Encrypt the integer using the custom encryption scheme below.
//               Print the encrypted integer.
//
//               Custom Encryption Scheme:
//                 - Replace each digit with the result of adding 7 to 
//                   the digit and getting the remainder after dividing
//                   the new value by 10. 
//                 - Then swap the first digit with the third, and the 
//                   second with the fourth.
//
// Notes       : 4-digit means an integer from 0000 to 9999
//                 (It's possible that 4-digit integers start at 1111)
//               intermediate_digit = (plaintext_digit + 7) % 10
//               Is 0 a 4-digit integer? We can make it one by saying that 
//                 0 = (0 * 1000) + (0 * 100) + (0 * 10) + (0 * 1)
//               Given a 4-digit number 5678, let's assume that 8 is the
//                 first digit, 7 is the second digit, and so on.
//
//               Verification = Did you build it right?
//               Validation = Did you build the right thing?
//
//               plaintext    intermediate    ciphertext
//                 0000          7777           7777         
//                 1111          8888           8888                     
//                 2345          9012           1290                      
//
//                 2345
//                    For the first digit, (5 + 7) % 10 = 2
//                    For the second digit, (4 + 7) % 10 = 1
//                    For the third digit, (3 + 7) % 10 = 0
//                    For the fourth digit, (2 + 7) % 10 = 9
//                    So, 2345 plaintext becomes 9012 ciphertext
//
//                 1111
//                    For the first digit, (1 + 7) % 10 = 8
//                    For the second digit, (1 + 7) % 10 = 8
//                    For the third digit, (1 + 7) % 10 = 8
//                    For the fourth digit, (1 + 7) % 10 = 8
//                    So, 1111 plaintext becomes 8888 ciphertext
//
#include <stdio.h>


int main(void)
{
    int plaintext = 0;

    while(-1 != plaintext)
    {
        printf("Enter 4-digit plaintext integer (-1 to quit): ");
        scanf("%d", &plaintext);
    }

    return 0;
}