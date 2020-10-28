// Storage Classes and Scope Rules of Variables
#include <stdio.h>

// What is variable scope?
// The region of the program where a variable exists and can be used; also 
// called 'visibility'

// What is a storage class?
// Defines the scope and lifetime of variables (and sometimes functions).
//
// - auto
//      1. The default storage class
//      2. auto variables can only be used in functions.
//
// - register
//      1. Identifies this variable as one that *could* be stored in a register
//         rather than RAM. 
//          a. Must be no larger than a register (e.g., 64-bits).
//          b. Can't use unary operator & on it. 
//      2. This is really just a request - there is no guarantee the variable
//         will actually be stored in a register.
//
// - static
//      1. Specifies that the lifetime of the variable is the entire program and
//         restricts the scope of the variable.
//          a. For local variables, the scope is already restricted, but static
//             local variables retain their value between calls, due to the
//             change in "lifetime". 
//          
//             Do you think static local variables are in the stack frame?
//
//          b. For global variables, the scope is restricted to the file that 
//             the variable is declared in. Because global variable declarations
//             exist outside of functions, the lifetime is already the entire
//             program.
//             
// - extern
//      1. Specifies that this variable is available to all files in the 
//         program. 
//      2. Cannot be used in conjunction with an initialization of the variable.
//      3. Identifies to the compiler that subsequent variable references 
//         to the variable are referring to a variable declared elsewhere.


void local_variable(void)
{
    int local_var = 0;

    for(int i = 0; i < 10; i++)
    {
        local_var++;
    }
    printf("local_var is %d\n", local_var);
}


void static_local_variable(void)
{
    static int local_var = 0;

    for(int i = 0; i < 10; i++)
    {
        local_var++;
    }
    printf("local_var is %d\n", local_var);
}

void static_local_variable2(void)
{
    static int local_var = 0;

    for(int i = 0; i < 10; i++)
    {
        local_var++;
    }
    printf("local_var is %d\n", local_var);
}


extern int A;
extern int B;

void use_global_variable_A(void)
{
    printf("Using global A = %d\n", A);
}
void global_variable_1(void);
void global_variable_2(void);
void global_variable_B1(void);


int main(void)
{
    printf("Calling local_variable()...\n");
    local_variable();
    local_variable();
    printf("Calling static_local_variable()...\n");
    static_local_variable();
    static_local_variable();
    static_local_variable();
    printf("Calling static_local_variable2()...\n");
    static_local_variable2();
    static_local_variable2();
    static_local_variable2();
    
    printf("Calling global_variable_1()...\n");
    global_variable_1();
    global_variable_1();
    global_variable_1();
    global_variable_1();
    global_variable_1();
    printf("Calling global_variable_2()...\n");
    global_variable_2();
    
    printf("Inside main, A = %d\n", A);
    
    printf("Calling global_variable_B1()...\n");
    global_variable_B1();
    
    use_global_variable_A();
    
    printf("Inside main, B = %d\n", B);
    
    extern int internal;
    printf("Inside main, internal = %d\n", internal);
    
    for(int x = 0, int y = 0; x <= y; x++)
    {
        printf("x = %d, y = %d\n", x, y);
    }

}