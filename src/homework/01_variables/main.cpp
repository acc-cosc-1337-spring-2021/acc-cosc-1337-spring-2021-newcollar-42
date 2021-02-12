//write include statements
#include <iostream>
using namespace std;
#include "variables.h"

//write namespace using statement for cout
using std::cout;  using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<">Enter Meal Amount: $";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter Tip rate :%";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	cout<<"Meal Amount :$"<<meal_amount<<endl;
	cout<<"Sales Tax :$"<<tax_amount<<endl;
	cout<<"Tip Amount :$"<<tip_amount<<endl;
	cout<<"Total :$"<<total<<endl;

	return 0;
}
