//write includes statements

//write using statements for cin and cout


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
#include <iostream>
#include "loops.h"

using namespace std;

int main() {
  

  
   do {
      
       cout << "Enter a number: ";
       int number;
       cin >> number;
      
       while(!(number >=1 && number <= 10))
	   {
          
           cout << "Invalid Number" << endl;
          
           cout << "Enter a number from 1 to 10: ";
           cin >> number;
       }
      
       cout << "Factorial of " << number << " is " << factorial(number) << endl;
      
       cout << "\nDo you want to continue (y/n): ";
       char opt;
       cin >> opt;
       if(opt == 'n' || opt == 'N')
           break;
       cout << endl;
   }
   while(true);
  
   return 0;
}