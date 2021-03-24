#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum of squares", "while loop example")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("Test call by value", "A copy of a variable's data is sent into the function")
{
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 5);
}

TEST_CASE("Test call by reerence", "A clone of the parameter is created")
{
	auto num1 = 5;
	auto num2 = 0;

pass_by_val_and_ref(num1, num2);

REQUIRE(num2 == 50);

}

TEST_CASE("Test calculate weekly pay for salaried employees")
{
	REQUIRE(calculate_weekly_pay(52000) == 1000);
}

TEST_CASE("Test calculate hours pay for hourly employees")
{
	REQUIRE(calculate_weekly_pay(40, 40) == 1600);
}