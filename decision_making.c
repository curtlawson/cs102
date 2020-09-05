#include <stdio.h>
#include <stdlib.h>
#include <time.h>             
#define INITIALIZE()     srand(time(0))
void grade(int*);void grade(int* s){*s =  50 + (int) (rand() / (double) (RAND_MAX) * (51));}
// Single selection if statement

// Relational operators
// Greater than, >
// Less than, <
// Greater than or equal, >=
// Less than or equal, <=

// Equality operators
// Is Equal, ==      
// Is Not Equal, !=  

// If/else statement

int main(void)
{
    int alice, bob, carol, david, erin, frank;    
    INITIALIZE();
    grade(&alice);
    grade(&bob);
    grade(&carol);
    grade(&david);
    grade(&erin);
    grade(&frank);
    
    // Who has the highest grade? Who has the lowest grade? Alice, Bob, Carol, David, Erin, or Frank?
    // >
    // <
    // >=
    // <=
    // ==
    // !=
    // if
    // if/else

    // Did Alice score higher than Bob?
    // alice > bob
    // if(condition)
    //     statement;
    
    // if(condition)
    // {
    //     statement(s);
    // }
    if(alice > bob)
        printf("Alice (%d) scored higher than Bob\n", alice);

    // Did Carol score less than Bob?
    if(carol < bob)
    {
        printf("Carol (%d) scored less than Bob\n", carol);
    }
    
    // Did David score more than (or the same) as Carol?
    // if(condition)
    //     statement;
    // else
    //     statement;
    
    // if(condition)
    // {
    //     statement(s);
    // }
    // else
    //     statement;

    // if(condition)
    //     statement;
    // else
    // {
    //     statement(s);
    // }

    // if(condition)
    // {
    //     statement(s);
    // }
    // else
    // {
    //     statement(s);
    // }    
    if(david >= carol)
    {
        printf("David (%d) scored equal to or higher than Carol\n", david);
    }
    else
    {
        printf("Carol scored higher than David\n");
    }
    
    if(erin <= alice)
    {
        printf("Erin (%d) scored less than or equal to Alice\n", erin);
    }
    else
        printf("Alice has a better score than Erin\n");
        
    if(bob == frank)
        printf("Bob and Frank have the same grade (%d)\n", frank);
    else
    {
        printf("Bob may or may not have scored higher than Frank\n");
    }
    
    if(alice != frank)
    {
        printf("Alice (%d) did not score the same grade as Frank (%d)\n", alice, frank);
    }
    else
    {
        printf("Alice and Frank have the same grade.\n");
    }
    
    // David = 93
    // Alice = 82
    // Bob = 
    // Carol = 
    // Frank = 64
    // Erin = 53
}