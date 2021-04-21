//write includes statements
#include "loops.h"
#include<iostream>
//write using statements for cin and cout
using std::cin;	using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{	int num;
	do
	{	
		cout<<"Enter a number [1-10]. Anything else to exit. ";
		cin>>num;	
		while (num >= 1 && num <=10)
		{
			cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<"\n";
			break;
		}
		
	} while (num >= 1 && num <=10);
	return 0;
	
}

