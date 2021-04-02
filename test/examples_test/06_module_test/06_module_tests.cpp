#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test new bank account balance is 0")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test new bank account with given begin balance")
{
	BankAccount account(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test bank account depoit with valid ammount")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

}

TEST_CASE("Test account withdraw with given begin balance")
{
	BankAccount account(100);
	account.withdraw(10);
	REQUIRE(account.get_balance() == 90);
}



TEST_CASE("Test bank account deposit with given begin balance")
{
	BankAccount account(100);

	account.deposit(50);
	REQUIRE(account.get_balance() == 150);

}

TEST_CASE("Test bank account depoit with invalid ammount")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.deposit(-10);
	REQUIRE(account.get_balance() == 50);

}

TEST_CASE("Test bank account withdraw with valid ammount")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.deposit(-10);
	REQUIRE(account.get_balance() == 50);

	account.withdraw(10);
	REQUIRE(account.get_balance() == 40);
}

TEST_CASE("Test bank account withdraw with invalid ammount ")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.deposit(-10);
	REQUIRE(account.get_balance() == 50);

	account.withdraw(10);
	REQUIRE(account.get_balance() == 40);

	account.withdraw(-10);
	REQUIRE(account.get_balance() == 40);
}

TEST_CASE("Test bank account withdraw with ammount greater than balance")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);

	account.withdraw(100);
	REQUIRE(account.get_balance() == 50);
}

