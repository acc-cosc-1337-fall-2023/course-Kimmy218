//write include statements
#include "if_else_if.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{
	auto year = 0;
	cout<<"Enter a year: "; //asking user to input year like a print statement in python
	cin>>year;  //telling the system what user inputs is assigning it to the year result

	auto result = get_generation(year); //year result is and pulling from original funtion to determine Gen

	cout<<"The generation is " <<result<<"\n";
	
	return 0;
}