/* TODO: fix all compiler errors in the following program (you can of course
 * use the compiler to check your work...) */
#include <iostream>
using std::cin;
using std::cout;
#include <limits.h>

int main()
{
	//lowest possible int in the system 
	int m = INT_MIN;
	int x;

	//Infinite loop until 
	while (true) {
		//Syntax error, include semicolon
		cin >> x;
		/* check if read into green was successful: */
		if (!cin.good()) break; /* if read failed, exit the loop */
		if (x > m) m = x;
	}
	//Use double colons instead of single colons bc it is a string 
	cout << "largest value was " << m << '\n';
	return 0;
}

// vim:foldlevel=2
