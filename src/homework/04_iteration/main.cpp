//write include statements
#include "dna.h"
#include<iostream>
using std::string;
using std::cout;    using std::cin;

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
    char choice;
    do
    {
        cout<<"Enter 1 for GC Conten. Enter 2 for DNA Complement. Press Y to exit: ";
        cin>>choice;
        string dna;
        if (choice == '1')
        {   
            cout<<"Please enter DNA string: ";
            cin>>dna;
            cout<<get_gc_content(dna)<<"\n";
        }
        else if(choice == '2')
        {
            cout<<"Please enter DNA string: ";
            cin>>dna;
            cout<<get_dna_complement(dna)<<"\n";
        }
        else if (choice != '1' && choice !='2' && choice != 'y' && choice != 'Y')
        cout<<"Please enter a valid entry. \n";
    }
    while ((choice != 'y' && choice !='Y'));
        
        


    return 0;
    

     
}