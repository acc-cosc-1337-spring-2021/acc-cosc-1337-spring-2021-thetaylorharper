#include "dna.h"
#include<iostream>
#include<cmath>
using std::string;
using std::cout;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string& dna)
{
    double gc_content;
    double diff = 0.0;
    for (size_t i = 0; i < dna.size(); i++)
    {
        if (dna[i] == 'G' || dna[i] == 'C')
        diff = diff + 1;

    }
    gc_content = diff / dna.size();
    return gc_content;
}







/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/


string reverse_string(string dna)
{
   string reverse_dna;
   for (int i = dna.size() - 1; i >= 0; i--)//Can not use the unsigned int size_t with out error?
   {
       reverse_dna.push_back(dna[i]);
   }
    
    return reverse_dna;
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


std::string get_dna_complement(string dna)
{
    string to_be_complement = reverse_string(dna);
    string dna_complement;
    for(auto s: to_be_complement)
    {
        if (s == 'A')
        dna_complement.push_back('T');
        else if(s == 'T')
        dna_complement.push_back('A');
        else if(s == 'G')
        dna_complement.push_back('C');
        else if(s == 'C')
        dna_complement.push_back('G');
    }
    
    return dna_complement;
}
    

    