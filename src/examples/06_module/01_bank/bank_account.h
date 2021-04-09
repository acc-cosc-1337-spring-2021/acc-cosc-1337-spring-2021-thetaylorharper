//bank_account.h
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>
class BankAccount
{
friend void friend_display_balance(const BankAccount& account);

public://access specifier
    BankAccount() = default;//synthesized default constructor
                                    //constructor delegation
    BankAccount(int b): balance(b){bank_balance += balance;}
    int get_balance()const {return balance;}//class function that returns an integer
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
private:
    int balance{0};//data this is customer balance
    int cust_id;
    static int bank_balance;//this is the total of all customer bank balances
    
};// dont forget semicolon!!


//FREE FUNCTIONS-NOT PART OF THE BANKACCOUNT CLASS
void display_balance(const BankAccount& account);
BankAccount get_account(int balance);

#endif