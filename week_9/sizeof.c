#include <stdio.h>

int main(void)
{
 
   printf("sizeof(int) is %lu\n", sizeof(int));   
   printf("sizeof(unsigned) is %lu\n", sizeof(unsigned));   
   printf("sizeof(long) is %lu\n", sizeof(long));   
   printf("sizeof(unsigned long) is %lu\n", sizeof(unsigned long));   
   int fac = 1;
   for(int i = 1; i <= 20; i++)
   {
       fac = fac * i;
       printf("n = %d, n! = %d\n", i, fac); 
       
   }
}
