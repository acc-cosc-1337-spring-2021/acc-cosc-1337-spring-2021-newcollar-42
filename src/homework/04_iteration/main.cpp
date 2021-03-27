//write include statements
#include <iostream>
#include "dna.h"    
using namespace std;
using std::cin; using std::cout;
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
 
 int main()
{
   string dna;
   int choice;
   char again;
   cout << "1 for Get GC Content" << endl;
   cout << "2 for Get DNA Complement" << endl;

   do
   {
       cout << "Enter you choice: ";
       cin >> choice;
       cout << "Enter DNA: ";
       cin >> dna;
       switch (choice)
       {
       case 1:
           cout << "GC Content: "<<get_gc_content(dna)<<endl;
           break;
       case 2:
           cout << "DNA Complement: " << get_dna_complement(dna) << endl;
           break;
       default:
           cout << "Invalid choice" << endl;
           break;
       }
       cout << "\nDo you want to Continue (y/Y or n/N): ";
       cin >> again;
   } while (again=='y' || again=='Y');
  
   return 1;
}

// code to trying to upload to github