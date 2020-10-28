#include <stdio.h>
//------------------------------------------------------------------------------ 
int main(void)
{
    // Problem: You want to handle the processing of a numerical value in a
    // switch statement.
    //
    // Remember that case statements must be integer-valued constant 
    // expressions. So, we can not put floating point values in a case 
    // statement.
    //
    // case 3.14159: // no!!!!
    // case 3: // Okay....
    //
    // Potential Solutions:
    // 1. List every possible value in the case statements inside the switch. 
    //    This is only feasible for relatively small numbers of discrete 
    //    values. 
    //    
    //    Example: Even numbers between 0 and 9 versus 
    //             Odd numbers between 0 and 9
    //
    //    switch(num)
    //    {
    //      case 1:
    //      case 3:
    //      case 5:
    //      case 7:
    //      case 9:
    //          printf("Odd\n");
    //          break;
    // 
    //      case 0:
    //      case 2:
    //      case 4:
    //      case 6:
    //      case 8:
    //          printf("Even\n");
    //          break;
    //
    //      default:
    //          printf("Invalid\n");
    //          break;
    //    }
    // 
    // 2. Put the numerical values in "buckets" and have a case statement for
    //    each one. The "buckets" should be identified by some integer-valued
    //    constant expression (e.g., 1, 2, 3, ...)
    //
    //
    //    int IS_EVEN = 1;
    //    int IS_ODD = 2;
    //    
    //    if(num % 2 == 0)
    //          state = IS_EVEN;
    //    else
    //          state = IS_ODD;
    //
    //    switch(state)
    //    {
    //      case IS_EVEN:
    //          printf("Even\n");
    //          break;
    //
    //      case IS_ODD:
    //          printf("Odd\n");
    //          break;
    //
    //      default:
    //          printf("Invalid\n");
    //          break;
    //    }
    //
    // Follow-on problem: What if there was no such thing as a switch?
    // 
    // We can accomplish the same thing with nested or sequential
    // selection statements.
    //
    // if(num >= 0 && num < 10 && num % 2 == 0)
    // {
    //      printf("Even\n");
    // }
    // else if(num >= 0 && num < 10 && num % 2 == 1)
    // { 
    //      printf("Odd\n");
    // }
    // else
    // {
    //      printf("Invalid\n");   
    // }
    //
    // int grade = getchar();
    // switch(grade)
    // {
    //    case 'A':
    //    case 'a':
    //
    //    ...
    //
    //    case '\n':
    //    ...
    //
    //    default:
    //
    // }
    
    //
    // if(num >= 0 && num < 10 && num % 2 == 0)
    //      printf("Even\n");
    // if(num >= 0 && num < 10 && num % 2 == 1)
    //      printf("Odd\n");
    // if(num < 0 || num >= 10)
    //      printf("Invalid\n");
    
    

}