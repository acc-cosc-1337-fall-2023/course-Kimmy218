#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else_if.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify is overtime Configuration", "overtime config")
{
	REQUIRE(is_overtime(40) == false);
	REQUIRE(is_overtime(41) == true);
}

TEST_CASE("Test get generation funcgtion", "If Else IF config")
{
	REQUIRE(get_generation(1997) == "Centenial");
	REQUIRE(get_generation(2024) == "Invalid Year");
	REQUIRE(get_generation (1980) == "Millenial");
	REQUIRE(get_generation (1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby boomer");
	REQUIRE(get_generation(1926) == "Silent Generation");
	REQUIRE(get_generation(1920) == "Invalid Year");
}

TEST_CASE("Test menu function", "verification")
{
	REQUIRE(menu(0) == "Invalid Option");
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(5) == "Invalid Option");
}