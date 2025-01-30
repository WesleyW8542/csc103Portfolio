#include <iostream>  /* this copy+pastes from the file iostream */
/* NOTE: stuff between slash * ... * slash is ignored by the compiler. */
// you can also write comments like this (// ... end of line)
using std::cin; /* put us on a "first name basis" with std::cin */
using std::cout; /* same for cout */
// using namespace std;  // lazy way

/* Remember: our program needs a well-defined starting point.  That is,
 * whatever is in main() {...} will be the first thing that happens when
 * you run this program. */
int main()
{
	int green; /* smallest number so far */
	int blue;  /* most recent number */
	/* NOTE: "int" is the *datatype* of green and blue and is required.
	 * This can help the compiler find bugs for you before you run your program. */
	/* NOTE: range for things of type "int" is -2^31 .. 2^31-1 */
	/* now we listen and write the first number to green */
	cin >> green;  /* Careful to not get the ">>" backwards "<<" */
	/* then listen for new numbers on blue; compare with green, ovewrite if necessary */
	while (true) { /* read Prof. Li's notes to see the exact form of the while loop */
		/* we will do what's in here forever... or until we hit a "break;" */
		cin >> blue;
		/* check and make sure that the last read from cin worked */
		if (cin.good() == false) { /* we are out of numbers */
			break; /* leaves the inner most loop containing this line */
			/* ignore details of cin.good() for now */
		}
		if (green < blue) {
			green = blue;
		}
	}
	/* how could we have arrived here?  Must of ran out of numbers (or failed
	 * to read a new one for some other reason).  So let's print the result */
	cout << "largest number was " << green << "\n";
	/* NOTE: the stuff between the double quotes are *string literals*.  They
	 * represent the exact text you type (more or less...). */
}
