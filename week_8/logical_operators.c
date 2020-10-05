#include <stdio.h>

int main(void)
{
   // Logical operators for and & or
      
   // Boolean logic operators
   // 1. AND
   //   a. Binary operator; two operands A, B.
   //   b. A AND B
   //   c. Evaluates to "true" when both A is true and B is true
   //   d. Truth Table
   //   
   //       A   B       A AND B
   //       T   T          T  <------ only true when A is true, B is true
   //       T   F          F
   //       F   T          F
   //       F   F          F
   //
   // 2. OR
   //   a. Binary operator; two operands A, B.
   //   b. A OR B
   //   c. Evaluates to "true" when either of A or B is true.
   //   d. Truth Table
   //
   //       A   B       A OR B
   //       T   T         T
   //       T   F         T
   //       F   T         T
   //       F   F         F <---- only false when both A is false, B is false
  
  
   // We can use these operators in our conditions in our if/else, while, etc.
   // AND is represented as &&; so, A && B is how we apply the AND operation
   // OR is reprsented as ||; so, A || B is how we apply the OR operation

   // 1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
   // 2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
   // 3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
   // 4. The year is a leap year (it has 366 days).
   // 5. The year is not a leap year (it has 365 days).   

   //    DIV-BY-400     DIV-BY-100      DIV-BY-4        LEAP-YEAR
   //       T               T               T               Yes  
   //       T               T               F                No
   //       T               F               T               Yes
   //       T               F               F                No
   //       F               T               T                No
   //       F               T               F                No
   //       F               F               T               Yes
   //       F               F               F                No

   //    DIV-BY-400     DIV-BY-100      DIV-BY-4        LEAP-YEAR
   //       T               T               T               Yes  
   //       ?               F               T               Yes

   for(int year = 1900; year <= 2100; year++)
   {
       int divisible_by_4 = year % 4 ? 0 : 1;
       int divisible_by_100 = year % 100 ? 0 : 1;
       int divisible_by_400 = year % 400 ? 0 : 1;

       // a + b + c
       // a && b && c
       //  temp  && c
       //     result
       if((is_divisible_by_4 && divisible_by_100 && divisible_by_400) ||
          (divisible_by_4 && !divisible_by_100))
       {
           printf("%d is a leap year\n", year);
       }
       
   }
}