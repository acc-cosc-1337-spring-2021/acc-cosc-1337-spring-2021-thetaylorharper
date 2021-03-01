//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>
//Write namespace using statements for cout and cin
using std::cin;	using std::cout;
int main() 
{	auto grade = 100;
	cout<<"Enter your numerical grade: ";
	cin>>grade;

	cout<<"Grade Recieved: "<<get_letter_grade_using_if(grade)<<"\n";
	cout<<"Grade Recieved: "<<get_letter_grade_using_switch(grade)<<"\n";
	
	return 0;
}

