//cpp
#include "decision.h"

std::string get_letter_grade_using_if(int grade)
{
    std::string grade_letter;
    
    if (grade >= 90 && grade <= 100)
    {
        grade_letter = "A";
    }
    else if (grade >= 80 && grade <= 89)
    {
        grade_letter = "B";
    }
    else if (grade >=70 && grade <=79)
    {
        grade_letter = "C";
    }
    else if (grade >=60 && grade <=69)
    {
        grade_letter = "D";
    }
    else if (grade >= 0 && grade <=59)
    {
        grade_letter = "F";
    }
    else 
    {
        grade_letter = "Invalid grade";
    }

    return grade_letter;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string grade_letter;
    switch (grade)
    {
    case 90 ... 100:
        grade_letter = "A";
        break;
    case 80 ... 89:
        grade_letter = "B";
        break;
    case 70 ... 79:
        grade_letter = "C";
        break;
    case 60 ... 69:
        grade_letter = "D";
        break;
    case 50 ... 59:
        grade_letter = "F";
        break;
    default: 
        grade_letter = "Invalid grade";
        break;
    }
    return grade_letter;
    
}









