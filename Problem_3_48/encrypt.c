// 
// File        : encrypt.c
//
// Description : This program encrypts a 4 digit integer using a custom 
//               encryption scheme.
//
// NOTE!!!!    : Since this uses the math library, compile and build it
//               using the following command:
// 
//                  gcc encrypt.c -lm
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
//                 9222                 		9969
//                 4994                 		6116
//                 4344		                    1110
//                 9867		                    3465
//                 6311		                    8830
//                 0191		                    6878
//                 5399		                    6620
//                 9652		                    2963
//                 5201		                    7829
//                 6537		                    0432
//                 2228		                    9599
//                 5407		                    7421
//                 9374		                    4160
//                 1102		                    7988

//                 Test cases
//                 0000, 1111, etc. is a good test case, but not the only one
//                 1212, etc. is a good test, but not the only one
//                 4567, etc. is a good test
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
#include <math.h>
#include <stdio.h>

int main(void)
{
    int not_finished = 1;
    char c;
    printf("enter char: ");
    scanf("%c", &c);
    printf("You entered %d\n", (int)c);
    int x = (int)c;
    printf("x is %d\n", x);
    

    while(not_finished)
    {
        // Read a plaintext integer from the user
        int plaintext = 0;
        printf("> ");
        //scanf("%d", &plaintext);
 
        // Check to see if the user is finished.
        // If the user entered a -1 then we should stop processing.
        not_finished = (plaintext != -1) ? 1 : 0;
        
        if(not_finished)
        {
            // Check that user input is nonzero. 
            int invalid_user_input = (plaintext < 0) ? 1 : 0;
                
            // Check that user input is less than 9999. 
            // If user input is already flagged as invalid, do not overwrite it.
            invalid_user_input = (plaintext > 9999) ? 1 : invalid_user_input;
    
            // If the user entered value less than zero or greater than 9999 
            if(invalid_user_input)
            {
                //  Print an error message
                printf("Error: Invalid user input received.\n");
            }
            else
            {
                int digit = 0;
                int i = 0;
                int temp = plaintext;
                int ciphertext = 0;

                // Loop over each digit
                while(i < 4)  // 0, 1, 2, 3
                {
                    // Extract the current digit from the user input
                    digit = temp % 10;
                    
                    // Encrypt the digit by adding 7 and
                    // finding remainder after dividing by 10
                    digit = (digit + 7) % 10;   
                    
                    // The ciphertext is formed from the encrypted digits
                    // as follows:
                    // Construct the ciphertext value by building an integer
                    // from its digits as follows:
                    //
                    // Swap the 1st digit (ones) with the 3rd (hundreds)
                    // Swap the 2nd digit (tens) with the 4th (thousands)
                    //
                    // For i = 0
                    // ciphertext += (digit * 100);   // 100 =  10^2  (0)  0+2
                    // i = 1
                    // ciphertext += (digit * 1000);  // 1000 = 10^3  (1)  1+2
                    // i = 2
                    // ciphertext += (digit * 1);     // 1 =    10^0  (2)  2-2
                    // i = 3
                    // ciphertext += (digit * 10);    // 10 =   10^1  (3)  3-2
                    //        
                    // From that, derive the following general calculation:
                    //
                    if(i < 2)
                    {
                        ciphertext += digit * pow(10,i+2);
                    }
                    else
                    {
                        ciphertext += digit * pow(10,i-2);
                    }
                    
                    // Advance to the next digit
                    temp /= 10;  
                    i += 1;
                }

                // Print the encrypted integer (ciphertext)
                printf("%04d\n", ciphertext);
            }
        }
   }

    return 0;
}