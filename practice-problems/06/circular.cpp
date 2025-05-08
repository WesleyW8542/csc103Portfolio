/* TODO: write a function that takes a string s and an integer n and circularly
 * shifts the string's characters to the right by n positions.  For example,
 * the string "Halloween" shifted by 3 would become "eenHallow".
 * NOTE: you can assume the integer is non-negative.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */
void circularShift(string &s, int n)
{
    if (s.empty()) 
	{
		return;
	}
    n = n % s.size();  
    s = s.substr(s.size() - n) + s.substr(0, s.size() - n);
}

int main()
{
	/* TODO: call your function, make sure it works... */
	string word = "Halloween"; 

	int shiftAmount = 3;

    circularShift(word, shiftAmount);
    cout << word << endl;  
	
	return 0;
}

// vim:foldlevel=2
