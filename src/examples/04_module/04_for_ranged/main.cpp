
#include "for_ranged.h"

int main() 
{
	std::string name = "test";

	loop_string_w_for_loop(name); //passing in string as a parameter
	loop_string_w_for_range(name);
	return 0;
}