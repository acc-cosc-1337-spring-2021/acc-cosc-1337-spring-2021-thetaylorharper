//atm.h
#ifndef ATM_H
#define ATM_H
#include<iostream>
#include<stdlib.h>
#include<vector>
#include "bank_account.h"

class ATM
{
public:
    ATM();//constructor
    //when executed initialize this account with an incoming 
    //BankAccount value
    void display_balance()const;
    void scan_card(); 

private:
    std::vector<BankAccount> accounts;
    int get_balance_from_DB();//simulate database
    int customer_index{0};
};



#endif

