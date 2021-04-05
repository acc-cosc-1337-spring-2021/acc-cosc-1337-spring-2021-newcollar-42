//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin
using namespace std;
#include<iostream>

using std::cin; using std::cout;

int main() 
{
	int grade;
	cout<<"Enter a number: ";
	cin>>grade;
	
	if(grade <= 100 && grade >=0)

	{
		cout<<"The letter grade using if" " = "  << get_letter_grade_using_if(grade) << endl ;
		cout<<"The letter grade using switch" " = "  << get_letter_grade_using_switch(grade) << endl;
	}

	else
	{
		 cout<<"number is out of range\n";

	}


	return 0;
}

