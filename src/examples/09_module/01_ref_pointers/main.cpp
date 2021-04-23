#include "ref_pointers.h"
#include<iostream>
using std::cout;

#include<memory>
using std::unique_ptr; using std::make_unique;

#include<vector>
using std::vector;

int main() 
{	
	//references
	int num = 0, num1 = 5;
	int& num_ref = num;//points to the address of num

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num "<<&num<<"\n";
	cout<<"Value of num via num_ref"<<num_ref<<"\n";

	num_ref = num1;//changes values //keeps address
	cout<<"Value of num1 via num_ref"<<num_ref<<"\n";
	cout<<"Address of num1 "<<&num1<<"\n";
	cout<<"Address of num "<<&num_ref<<"\n\n";

	//pointers
	//gets own address in memory
	//creates dynamic memory
	int num2 = 10, num3 = 15;
	int* num_ptr = &num2;//pointers always need the &
	//read as pointer to an integer
	//give me the address of num2

	cout<<"Value of num2 "<<num2<<"\n";
	cout<<"Address of num2 "<<&num2<<"\n";
	cout<<"Value of num2 via num_ptr "<<*num_ptr<<"\n";
	cout<<"Address of num2 via num_ptr "<<num_ptr<<"\n";//address of the variable it it pointing to
	cout<<"Address of num_ptr "<<&num_ptr<<"\n\n";

	num_ptr = &num3;
	cout<<"Value of num3 "<<num3<<"\n";
	cout<<"Address of num3 "<<&num3<<"\n";
	cout<<"Value of num3 via num_ptr "<<*num_ptr<<"\n";
	cout<<"Address of num3 via num_ptr "<<num_ptr<<"\n\n";//address of the variable it it pointing to
	
	//Dynamic memory
	int* ptr_num = new int(5);//creates
	cout<<"Value: "<<*ptr_num<<"\n\n";//use memory
	delete ptr_num;//releases memory

	//smart pointer-unique pointer
	unique_ptr<int> up_num = make_unique<int>(100);//now a pointer that points at nothing 
												   //because of "move"
	cout<<"Value of num: "<<*up_num<<"\n";
	cout<<"Address of up_num: "<<&up_num<<"\n";

	vector<unique_ptr<int>> numbers;
	numbers.push_back(std::move(up_num));//will not work only one pointer can point to it
							  //Because unique_ptr
	cout<<"Value of element 0: "<<*numbers[0]<<"\n";

	return 0;
}