//write include statement for if header

#include "if.h"  

//write code for the is_even function that returns true if num is even, false otherwise
bool is_even(int num)
{
    auto even = false;

    if(num % 2 == 0)
    {
        even = true;
    }    


    return even;
}
/*bool is_even(int num)
{
    auto even = false;

    if(num % 2 == 0)
    {
        even = true;
    }

    return even;
}*/

//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise

bool is_in_range_1_to_10(int num)
{
    return num >= 1 && num <= 10;
}

bool is_not_in_range_1_to_10(int num)
{
    return (!(num >= 1 && num <=10));
}

bool is_not_in_range_1_to_10_OR(int num)
{
    return num < 1 || num > 10;
}

bool is_char_a_consonant(char c)
{
    return (!(c == 'a' || c == 'e' || c == 'i' || c== 'o' || c == 'u'));
}