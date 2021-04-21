#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}  

TEST_CASE("Test is even function", "return true if even or false if odd")
{
	REQUIRE(is_even(4) == true);
}

TEST_CASE("Test get generation function", "accept a year retrun a generation for that period")
{
	REQUIRE(get_generation(1997) == "Centenial");
	REQUIRE(get_generation(1988) == "Millenial");
}

TEST_CASE("Test menu function", "Given number return Option N string")
{
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(5) == "Invalid Option");
}

TEST_CASE("Test number in rage 1 to 10", "given number return true if in range")
{
	REQUIRE(is_in_range_1_to_10(0) == false);
	REQUIRE(is_in_range_1_to_10(5) == true);
	REQUIRE(is_in_range_1_to_10(111) == false);

}

TEST_CASE("Test number not in range 1 to 10", "given number return true if not in range")
{
	REQUIRE(is_not_in_range_1_to_10(0) == true);
	REQUIRE(is_not_in_range_1_to_10(5) == false);
	REQUIRE(is_not_in_range_1_to_10(111) == true);
}

TEST_CASE("Test number not in range 1 to 10 or", "given number return true if not in range")
{
	REQUIRE(is_not_in_range_1_to_10_OR(0) == true);
	REQUIRE(is_not_in_range_1_to_10_OR(5) == false);
	REQUIRE(is_not_in_range_1_to_10_OR(111) == true);
}

TEST_CASE("Test if char a consonant", "given char, return true if consonant")
{
	REQUIRE(is_char_a_consonant('a') == false);
	REQUIRE(is_char_a_consonant('b') == true);

}