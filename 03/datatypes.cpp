#include <iostream>
using namespace std;

int main()
{
	/* why do I consider floating point "contamination"? */
	double f = 0.1;
	double g = 0.3;
	if (g == f+f+f) {
		cout << "as expected.\n";
	} else {
		cout << "hmmmmmmm.\n";
		#if 0
		cout << "g     == " << g << "\n";
		cout << "f+f+f == " << f+f+f << "\n";
		#endif
		printf("g     == %.17f\n",g);
		printf("f+f+f == %.17f\n",f+f+f);
	}
	/* Takeaway: using floating point numbers in your programs reduces
	 * your ability to precisely reason about correctness.  Use with caution,
	 * and maybe use them only when necessary. */
}

// vim:foldlevel=3
