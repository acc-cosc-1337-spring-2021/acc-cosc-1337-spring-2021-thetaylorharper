#include<iostream>
#include "bank_account.h"
using std::cout;

int main()
{
	BankAccount account = get_account(100);//creates a  variable in memory
						//create an instance of the BankAccount object
	
	display_balance(account);
	cout<<"Balance: "<<account.get_balance()<<"\n";
	
	cout<<"Deposit $50\n";
	account.deposit(50);
	cout<<"Balance: "<<account.get_balance()<<"\n";
	
	cout<<"With draw $10: \n";
	account.withdraw(10);
	cout<<"Balance is now: "<<account.get_balance()<<"\n";



	return 0;

}
//cout<<sizeof(account)<<"\n";//how many bytes does account take up