/* TODO: write a small program that reads 3 integers from standard input
 * and prints the average of those integers.  NOTE: the average might not
 * be an integer.
 * Bonus question: if you can, make your program work not just for 3 integers,
 * but for arbitrarily many. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	//Instantiating variables
	int x;
	int average = 0;
	float count = 0;

	while(cin >> x)
	{
		count++;
		average += x;
	}
	if (count)
		cout << "The average is " << average/count << '\n';
}

// vim:foldlevel=2
