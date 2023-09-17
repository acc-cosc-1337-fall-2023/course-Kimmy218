#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "casting.h"
#include "data_type_size.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test convert int to double", "double takes precedence over int") 
{
	REQUIRE(convert_to_double(10, .5) == 5.0);
}

TEST_CASE("Test convert double to int", "truncate decimal") 
{
	REQUIRE(convert_double_to_int(10.5) == 10);
	REQUIRE(convert_double_to_int(10.559876676) == 10);
}

TEST_CASE("Test int is 4bytes wSizeOf")
{
	REQUIRE(get_int_data_size(4) == 4);
	REQUIRE(get_int_data_size(10) == 4);
	REQUIRE(get_int_data_size(1000000) == 4);
}

TEST_CASE("Test double is 8bytes wSizeOf")
{
	REQUIRE(get_double_data_size(120.5989599) == 8);
	REQUIRE(get_double_data_size(10.55464) == 8);

}

TEST_CASE("Test character is 1byte wSizeOf")
{
	REQUIRE(get_char_data_size('A') == 1);
	REQUIRE(get_char_data_size('9') ==1);
	REQUIRE(get_char_data_size('#') == 1);

}

TEST_CASE(" Test program with constants get area of circle")
{
	REQUIRE(get_area_of_circle(10) == 314.159);
}