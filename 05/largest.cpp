/* rewriting program to find largest value using the fold pattern
 * (more explicitly). */
#include <iostream>
using namespace std;
#include <limits.h> /* for INT_MIN... */

#define MAX(a,b) ((a<b)?b:a)

int main()
{
	int max = INT_MIN; /* INT_MIN is basically -infinity for type int */
	int x; /* for input */
	while (cin >> x) {
		max = MAX(max,x);
	}
	cout << "max was: " << max << "\n";
}

// vim:foldlevel=3
