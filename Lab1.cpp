
/*
Command line args can be given in c they are given after the name of the program
in the command line shell.

To pass cl args we usually define main() with 2 args .
furst arg is the number of command line args.
2nd is the list of command line args.
argc tells us the number of command line args (strings).
argv is the list of the cl args
both are passed to main.
argc will be the number of strings pointed by cl argv.
argv will be 1+ argc.

*/
/* Argc (argument count) is int and stores the number of command line arguments
passed by the user. so if we pass a value argc would be 2(one vor value one for program name).
The value of argc should be non negative.



/*
argv (argument vector) is array of character pointers listing all the args.
if argc is  > 0 then the  array elements in arg v will contain pointers to strings
*/
//atoi is the function call used to turn the char string into an input since the program is asked to add in int input.

#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[])  // We use argc and argv to pass command line arguments in C++
{
	char *input = argv[1];
	int User_input = atoi(input); // The atoi function call turns the char string into an integer value.
	int Max_range = 1001; // The maximum range of numbers that can be used.
	int Min_range = 0; // The minimum range of numbers that can be used.
	int guessed_Num = 0;
	
	/* As per the binary search algorithm we start with the midpoint which we find by the formula below
	and eliminate the numbers that are not choosen by the user. */ 
    guessed_Num = (Max_range + Min_range) / 2; 
    char choice;
    
    // If condition used to set up a range for the numbers the programs can choose from.

    if(User_input > 0 && User_input < 1001)
    {
    while(guessed_Num != User_input )
    {
	if(User_input < guessed_Num + 1) 
		{
			choice = 'Y';
			cout << "Is the number you are thinking of less than " << guessed_Num + 1 << " ?" << choice << endl;
			Max_range = guessed_Num;
			guessed_Num = (Max_range + Min_range) / 2;
		}
	else
		{
			choice ='N';
			cout << "Is the number you are thinking of less than " << guessed_Num + 1 << " ?" << choice << endl;
			Min_range = guessed_Num;
			guessed_Num = (Max_range + Min_range) / 2;
		}		
    }		
	cout << "Your number is " << guessed_Num << "!" << endl;
    }
    else
    {
    	cout << "Invalid Number!" << endl;
    }
	return 0;			
}