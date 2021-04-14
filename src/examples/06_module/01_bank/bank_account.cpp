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


//FRIEND FREE FUNCTION
void friend_display_balance(const BankAccount& account)
{
    std::cout<<"Friend Dispaly balance: "<<account.balance<<"\n";
}

std::ostream& operator<<(std::ostream& out, const BankAccount& account)
{
   out<<" overloaded ostream Dispaly balance: "<<account.balance<<"\n";

   return out;
}

std::istream& operator>>(std::istream& in, BankAccount& account)
{
    int amount = 0;
    cout<<"Enter amount: ";
    in>>amount;
    account.balance += amount;

    return in;
}

BankAccount operator+(const BankAccount& a1, const BankAccount a2)
{
    BankAccount account(a1.balance + a2.balance);
    return account;
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

//============branch bank class

void BranchBank::update_balance(int b)
{
    branch_balance += b;
    BankAccount::bank_balance += b;
}
