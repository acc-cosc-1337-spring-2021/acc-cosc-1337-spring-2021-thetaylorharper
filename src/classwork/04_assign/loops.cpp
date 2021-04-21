//cpp
#include "loops.h"

int sum = 1;
int fact = 1;
int factorial(int num)
{
    
    while(fact <= num)
    {
        sum = sum * fact;
        fact++;
        
    }

    return sum;
    
}

