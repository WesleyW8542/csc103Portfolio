#include <iostream>
using std::cout;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main()
{
	int i=5, j=6, k=7, n=3;
	cout << i + j * k - k % n << "\n"; //i+(j*k)-(k%n) = 5+(42)-1= 46
	cout << i / n << "\n"; //1
	return 0;
}

// vim:foldlevel=2
