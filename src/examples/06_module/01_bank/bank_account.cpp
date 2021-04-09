//bank_account.cpp
#include "bank_account.h"
#include<iostream>
using std::cout;

void BankAccount::deposit(int amount)
{   
    
    if (amount > 0)
    {
        balance += amount;//this->point at class variable
        bank_balance += amount;
    }    
}

void BankAccount::withdraw(int amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        bank_balance -= amount;
    }    
}

int BankAccount::bank_balance = 0;

void friend_display_balance(const BankAccount& account)
{
    std::cout<<"Friend Dispaly balance: "<<account.balance<<"\n";
}


//FREE FUNCTION NOT PART OF BANKACCOUNT CLASS!!
void display_balance(const BankAccount& account)
{
    cout<<"Display Balance: "<<account.get_balance()<<"\n";
    //cant change it. Read only.
}

BankAccount get_account(int balance)
{
    BankAccount account(balance);

    return account;
}
