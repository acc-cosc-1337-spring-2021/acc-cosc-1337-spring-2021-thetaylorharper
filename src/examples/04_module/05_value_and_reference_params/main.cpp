#include<iostream>
#include "value_ref.h"

int main() 
{
	auto num1 = 5;
	std::cout<<"Size of int num is "<<sizeof(num1);
	auto num2 = 0;

	pass_by_val_and_ref(num1, num2);
	/*auto num = 5;//existingt int variable
	//int& num_ref = num;

	std::cout<<"Value of num is: "<<num<<"\n";
	std::cout<<"Address of num is: "<<&num<<"\n\n";

	int& num_ref = num;//reference variable, can only be assigned once
	std::cout<<"Value of num is: "<<num<<"\n";
	std::cout<<"Value of num_ref is: "<<num_ref<<"\n";

	num_ref = 10;//reference variable, can only be assigned once
	std::cout<<"Value of num is: "<<num<<"\n";
	std::cout<<"Value of num_ref is: "<<num_ref<<"\n";
	std::cout<<"Address of num is: "<<&num_ref<<"\n\n";


	//auto num1 = 5;

	//pass_by_val_and_ref(num1); // call by value
*/
	return 0;
}