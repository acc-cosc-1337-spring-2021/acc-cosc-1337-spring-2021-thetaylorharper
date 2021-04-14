#include<iostream>
#include<string>
#include<time.h>

#include "atm.h"
#include "bank_account.h"
using std::cout;	using std::cin;

int main()
{
	srand(time(NULL));
	BankAccount account = get_account(100);//creates a  variable in memory
						//create an instance of the BankAccount object
	BankAccount a1(100), a2(100);
	BankAccount a3 = a1 + a2;


	//cout<<account; //operater overlaoding
	//cin>>account;
	cout<<a3;
	//display_balance(account);
	
	//BranchBank branch(100000);
	//branch.update_balance(5000);

	//cout<<"Branch balance: "<<branch.get_branch_bank_balance()<<"\n";
	//cout<<"Bank Balance: "<<account.get_bank_balance()<<"\n";
	/*char choice;
	ATM atm;
	do
	{
		atm.scan_card();
		atm.display_balance();

		cout<<"Continue y? ";
		cin>>choice;

	} while (choice == 'y' || choice == 'Y');


	friend_display_balance(account);
	display_balance(account);
	cout<<"Balance: "<<account.get_balance()<<"\n";
	
	cout<<"Deposit $50\n";
	account.deposit(50);
	cout<<"Balance: "<<account.get_balance()<<"\n";
	
	cout<<"With draw $10: \n";
	account.withdraw(10);
	cout<<"Balance is now: "<<account.get_balance()<<"\n";*/



	return 0;

}
//cout<<sizeof(account)<<"\n";//how many bytes does account take up