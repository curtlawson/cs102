#include <math.h>
#include <stdio.h>
int main(void)
{
    int not_finished = 1;
    while(not_finished)
    {
        int plaintext = 0;
        printf("> ");
        scanf("%d", &plaintext);
        not_finished = (plaintext != -1) ? 1 : 0;
        if(not_finished)
        {
            int invalid_user_input = (plaintext < 0) ? 1 : 0;
            invalid_user_input = (plaintext > 9999) ? 1 : invalid_user_input;
            if(invalid_user_input)
            {
                printf("Error: Invalid user input received.\n");
            }
            else
            {
                int digit = 0, i = 0, ciphertext = 0;
                while(i < 4)  
                {
                    digit = plaintext % 10;
                    digit = (digit + 7) % 10;   
                    if(i < 2)
                        ciphertext += digit * pow(10,i+2);
                    else
                        ciphertext += digit * pow(10,i-2);

                    plaintext /= 10;  
                    i += 1;
                }
                printf("%04d\n", ciphertext);
            }
        }
   }
}