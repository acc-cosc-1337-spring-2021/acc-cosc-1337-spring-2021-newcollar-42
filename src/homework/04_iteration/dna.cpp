#include "dna.h"
using namespace std;
#include<string>

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna) 

{   
    double g_or_c_count = 0;
        for (int i = 0; i < dna.length(); i++)
        {
            if (dna[i] == 'G' || dna[i] == 'C')
            {
                g_or_c_count++;
            }
        }
        double result =  g_or_c_count / dna.length();
        return result;
        
}

string get_reverse_string(string dna)
{
   string reverseDNA = "";
   for (int i = dna.length() - 1; i >= 0; i--)
       reverseDNA += dna[i];
   return reverseDNA;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna) {


    string comp = get_reverse_string(dna);

    string complement = "";

  

    for (int i = 0; i < comp.length(); i++) {

        

        if (comp[i] == 'A') {

            complement +='T';

        }

       

        else if(comp[i] == 'T') {

            complement += 'A';

        }

    
        else if(comp[i] == 'G') {

            complement += 'C';

        }


        else if(comp[i] == 'C') {

            complement += 'G';

        }

    }


    return complement;

}