/* TODO: write a program to compute (and then print) sum of all integers
 * given on standard input. */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int x;
	int sum = 0;
	while(cin >> x)
	{
		sum += x;
	}
	cout << "The sum of the integers is " << sum;
}

// vim:foldlevel=2
