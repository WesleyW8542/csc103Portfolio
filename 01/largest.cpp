#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* to get our pieces of paper, we need variables */
	int green; /* makes space for us to write an integer; names it "green" */
	int blue;  /* makes space for us to write another integer */
	/* next we need a way to "listen" for new numbers... */
	/* step 0: write first number on green: */
	cin >> green;
	/* NOTE: cin is "external" in a sense... we need to import the code for it. */
	while (true) {
		/* step 1: write the next one on blue */
		cin >> blue;
		/* NOTE: we need a way to figure out if we have run out of numbers:
		 * you can do this by checking cin.good() after trying to read*/
		if (cin.good() == false) {
			break; /* this will stop the loop */
		}
		if (green < blue) {
			/* NOTE: can't really erase an integer...but we can write something
			 * like negative infinity to it.  HOWEVER, maybe a better idea is to
			 * just overwrite the smaller one with the larger one.
			 * WHY? Now we can always just write the new number to the green paper. */
			// green = INT_MIN; /* INT_MIN is kind of like negative infinitiy for integers */
			green = blue;

		}
		/* step 3: write the next number on the "free" space (the negative infinity one) */
		/* Updated step 3: repeat all this from step 1 (listen and write on blue) */
	}
	cout << green;
}

/* NOTE: if you want to try to compile and run this, do the following:
 * $ g++ largest.cpp
 * $ ./a.out
 * Then type numbers in, and press ctrl-d when you are done.
 * */

// vim:foldlevel=2
