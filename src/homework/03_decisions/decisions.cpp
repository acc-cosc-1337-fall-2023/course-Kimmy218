//write include statement for decisions header
#include "decisions.h"
using std::string;

//Write code for function(s) code here
string get_letter_grade_using_if (int grade )
{
    string result;

    if (grade >= 90 && grade <= 100)
    {
        result = "Letter grade A";
    }
    else if(grade >= 80 && grade <= 89)
    {
        result = "Letter grade B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        result = "Letter grade C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        result = "Letter grade D";
    }
     else if(grade >= 00 && grade <= 59)
    {
        result = "Letter grade F";
    }
    else
    {
        result = "Invalid Grade";
    }

    return result;
}

std::string get_letter_grade_using_switch (int grade1 )
{
    string result;

    switch(grade1) 
    {
    case 90 ... 100:
        result = "Letter Grade A";
        break;
    case 80 ...89:
        result = "Letter Grade B";
        break;
    case 70 ... 79:
        result = "Letter Grade C";
        break;
    case 60 ... 69:
        result = "Letter Grade D";
        break;
    case 00 ... 59:
        result = "Letter Grade F";
        break;
    default:
        result = "Invalid Grade";
        break;
    }

    return result;
}
