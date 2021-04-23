#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test reference paramater")
{
	int num = 0, num1 = 0;
	ref_ptr(num, &num1);//get the address of num1
						//then feed it into the pointer
						//pointer then savie it into its own address

	REQUIRE(num == 10);
	REQUIRE(num1 == 20);
}