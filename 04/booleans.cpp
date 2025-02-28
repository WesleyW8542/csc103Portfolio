#include <iostream>
using namespace std;

int main()
{
	// bool b = true;
	bool b = 1;
	cout << "b == " << b << "\n";
	// b = false;
	b = 0;
	cout << "b == " << b << "\n";
	/* NOTE: there is a built in conversion from integers to boolean:
	 * The convention is as follows:
	 * 0 means false
	 * ANYTHING ELSE means true. */
	b = 239084;
	cout << "b == " << b << "\n";
	/* Warning: assignment statements have a value!  They take the
	 * value of the right hand side: */
	int x = 23;
	int y = 87;
	// cout << "x=y == " << (x=y) << "\n";
	/* Why??  Consider the following: */
	int z;
	z = x = y;
	/* question: does this mean
	 * (z = x) = y  OR
	 * z = (x = y)???
	 * Turns out the second one is what happens. */
	cout << "z == " << z << "\n";
	/* OK!  So let's review real quick:
	 * * Integers can count as booleans (0 is the only one that's false)
	 * * Assignment statements have VALUES!  Kinda makes sense (for chaining
	 *   mutliple assignemnts into one)...
	 * * "=" is not the same as "==" */
	cin >> x >> y;  /* really means (cin >> x) >> y... */
	if ((x = y)) {
		cout << "they were equal\n";
	} else {
		cout << "they were not equal\n";
	}
	printf("x == %i\ny == %i\n",x,y);
	/* NOTE: always compile with -Wall! */
}

// vim:foldlevel=3
