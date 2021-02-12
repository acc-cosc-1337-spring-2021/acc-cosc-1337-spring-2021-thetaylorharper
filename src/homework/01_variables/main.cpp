//write include statements
#include "variables.h"
#include <iostream>


//write namespace using statement for cout
using std::cin;		using std::cout;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num1 = 10, num2 = 10, multiply_numbers_result;
	multiply_numbers_result = multiply_numbers(num1, num2);
	cout<<num1<<" X "<<num2<<" = "<<multiply_numbers_result<<"\n";

	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"Please enter your meal total: $";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Please enter the percent you'd like to tip: %";
	cin>>tip_rate;
	tip_rate = tip_rate/100;

	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	
	cout<<"Meal amount: "<<meal_amount<<"\n";	
	cout<<"Sales Tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";


	return 0;
}
