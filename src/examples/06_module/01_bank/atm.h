//atm.h
#ifndef ATM_H
#define ATM_H
#include "bank_account.h"

class ATM
{
public:
    ATM(BankAccount& a) : account (a){}
    //when executed initialize this account with an incoming 
    //BankAccount value
    void display_balance()const;
 

private:
    BankAccount& account;
};









#endif

