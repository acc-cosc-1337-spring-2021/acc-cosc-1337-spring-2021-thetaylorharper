//bank_account.h
#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(int b) : branch_balance(b){}
    void update_balance(int b);
    int get_branch_bank_balance()const{return branch_balance;}
private:
    int branch_balance;
};

#endif

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>
class BankAccount
{
friend void friend_display_balance(const BankAccount& account);  
friend void BranchBank::update_balance(int b);
friend std::ostream& operator<<(std::ostream& out, const BankAccount& account);
friend std::istream& operator>>(std::istream& in, BankAccount& account);
friend  BankAccount operator+(const BankAccount& a1, const BankAccount a2);

public://access specifier
    BankAccount() = default;//synthesized default constructor
                                    //constructor delegation
    explicit BankAccount(int b): balance(b){bank_balance += balance;}
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