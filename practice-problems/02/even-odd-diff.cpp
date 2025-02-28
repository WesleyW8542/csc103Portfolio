/* TODO: write a program that computes the following strange thing:
 * the difference of the sum of all the evens and the odds.  E.g. if
 * the input were 4 7 6 then the output would be 3 (= (4+6) - 7).
 * You can figure out even oddness by using the % operator which computes
 * the *remainder* of a division.
 * Bonus question (easy):  can you do this without keeping track of two
 * different sums?
 * Bonus question (might be non-obvious): can you do this without any
 * if statements? */

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int x; 
	int even = 0;
	int odd = 0;
	int sum = 0;
	while(cin >> x)
		sum += (x%2 == 0) ? x : -x;
/*	{
		if(x%2 == 0)
		{
			even += x;
		}
		else 
		{
			odd += x;	
		}
	}  */
	cout << "The difference is " << sum << '\n';
}

// vim:foldlevel=2
