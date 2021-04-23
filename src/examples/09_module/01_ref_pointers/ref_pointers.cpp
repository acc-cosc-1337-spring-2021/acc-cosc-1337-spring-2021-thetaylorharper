#include "ref_pointers.h"

//

void ref_ptr(int& num, int* num1)
{
    num = 10;
    *num1 = 20;//change the value of whatever is num1 to 20
}