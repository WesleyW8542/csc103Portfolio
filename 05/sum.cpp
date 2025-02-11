#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int x; /* for input */
	while (cin >> x) {
		/* NOTE: in the standard library (iostream) there is some code
		 * that describes how to interpret a cin statement as a boolean!
		 * It will count as true if the last read succeeded and false otherwise. */
		// sum = sum + x;
		sum += x; /* shorthand for the above */
	}
	cout << "sum was: " << sum << "\n";
}

// vim:foldlevel=3
