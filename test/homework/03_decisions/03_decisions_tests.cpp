#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get letter grade using ", "If Else IF config")
{
	REQUIRE(get_letter_grade_using_if (95) == "Letter grade A");
	REQUIRE(get_letter_grade_using_if (85) == "Letter grade B");
	REQUIRE(get_letter_grade_using_if (75) == "Letter grade C");
	REQUIRE(get_letter_grade_using_if (65) == "Letter grade D");
	REQUIRE(get_letter_grade_using_if (20) == "Letter grade F");
	REQUIRE(get_letter_grade_using_if (110) == "Invalid Grade");
}

TEST_CASE("Test HW03 menu get_letter_grade_using_switch function", "Grade1 verification")
{
	REQUIRE(get_letter_grade_using_switch(95) == "Letter Grade A");
}