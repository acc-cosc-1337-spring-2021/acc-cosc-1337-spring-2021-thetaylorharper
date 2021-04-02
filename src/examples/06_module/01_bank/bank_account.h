//bank_account.h
class BankAccount
{
public://access specifier
    BankAccount() = default;//synthesized default constructor
                                    //constructor delegation
    BankAccount(int b): balance(b){}
    int get_balance()const {return balance;}//class function that returns an integer
    void deposit(int amount);
    void withdraw(int amount);
private:
    int balance{0};//data
    int cust_id;
    
};// dont forget semicolon!!

//FREE FUNCTIONS-NOT PART OF THE BANKACCOUNT CLASS
void display_balance(const BankAccount& account);
BankAccount get_account(int balance);