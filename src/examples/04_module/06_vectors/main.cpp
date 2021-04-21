#include "vec.h"
#include<iostream>
#include<string>

using std::string;
using std::vector;
using std::cout;

int main() 
{
	vector<string> names{"Joe", "Mary", "John"};
	names[1] = "jane";
	
	for(auto name: names)
	{
		cout<<name<<"\n";
	}

	
	vector<int> nums(10, 3);


	loop_vector_w_for_ranged(nums);


	return 0;
}