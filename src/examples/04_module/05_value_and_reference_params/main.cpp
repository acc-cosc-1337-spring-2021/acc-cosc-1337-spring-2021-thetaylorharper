#include<iostream>
#include "value_ref.h"

#include<string>
using std::string;
using std::cout;


int main() 
{	
	auto letter = 'a'; //char
	cout<<"memory used by char: "<<sizeof(letter)<<"\n";

	string name = "Joe";//create and assign value to string
	cout<<"Memory of string on stack is: "<<&name<<"\n";
	cout<<"Memory space used by string is: "<<sizeof(name)<<"\n";
	cout<<"Size of name string is: "<<name.size()<<"\n";
	cout<<"Size of name string is: "<<name.length()<<"\n";
	cout<<"Capacity of name string is: "<<name.capacity()<<"\n";
	
	cout<<name[0]<<"\n";

	string name1 ("Hello");
	name1.push_back(' ');
	name1.push_back('w');
	name1.append("orld");

	cout<<name1<<"\n";


	string name2{'h', 'i'};
	cout<<name2<<"\n";
	
	return 0;
}

