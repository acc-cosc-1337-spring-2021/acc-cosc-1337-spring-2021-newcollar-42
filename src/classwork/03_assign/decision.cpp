//cpp
#include "decision.h"

std::string get_letter_grade_using_if(int grade)
{
    std::string letter;
    
    if (grade>=90 && grade<=100)
    {
        letter = "A";
    }
    else if(grade>=80)
    {
        letter = "B";
    }
    else if(grade>=70)
    {
        letter = "C";
    }
    else if(grade >= 60)
    {
        letter = "D";
    }
    else
    {
        letter = "F";
    }

    return letter;
}

std::string get_letter_grade_using_switch(int grade) 
{
    std::string option;

    switch(grade/10)
    {
        case 10:
            option = "A";
            break;
        case 9:
            option = "A";
            break;
        case 8:
            option = "B";
            break;
        case 7:
            option = "C";
            break;
        case 6:
            option = "D";
            break;
        
        default:
            option = "F";
    }

    return option;
}