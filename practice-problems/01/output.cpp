#include <iostream>
using std::cout;
using std::endl;

/* TODO: predict the output of this program *without* running it!
 * Then compile and run it to check your answers and make sure you
 * understand what is going on if any of your guesses were wrong. */

int main() {
	int n;
	cout << (n = 4) << endl; //4
	cout << (n == 4) << endl; //1
	cout << (n > 3) << endl; //1, n still = 4
	cout << (n < 4) << endl; //0
	cout << (n = 0) << endl; //0
	cout << (n == 0) << endl; //1
	cout << (n > 0) << endl; //0
	cout << (n && 4) << endl; //0
	cout << (n || 4) << endl; //1
	cout << (!n) << endl; //1
    return 0;
}

// vim:foldlevel=2
