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