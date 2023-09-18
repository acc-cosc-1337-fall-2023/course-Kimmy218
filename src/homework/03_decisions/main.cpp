//write include statements
#include"decisions.h"
#include<iostream>

using std::cin;
using std::cout;


int main() 
{
	auto grade = 0;
	cout<<"Enter a number from 0 to 100 to display your letter grade: "; //asking user to input year like a print statement in python
	cin>>grade;  //telling the system what user inputs is assigning it to the grade result

	auto result = get_letter_grade_using_if(grade); //grade result & pulling from original/test function to determine letter grade

	cout<<result<<"\n";
	
	return 0;
}


int main1() 
{
	auto grade1 = 0;
	cout<<"Enter your score: ";
	cin>>grade1;

	auto result = get_letter_grade_using_switch(grade1);
	cout<<result<<"\n";

	return 0;
}