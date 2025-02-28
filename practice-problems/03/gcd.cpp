/* TODO: write a program that reads two integers and prints their greatest
 * common divisor.  E.g., if the two integers were 12 and 18, then your
 * program should print 6.  If the numbers were 12 and 19, it should print 1.
 * NOTE: there is a nice way to do this, known as the Euclidean Algorithm,
 * but my intention is for you to just "brute force" search for the gcd.  */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int firstInt = 0;
	int secInt = 0;
	cin >> firstInt;
	cin >> secInt;
	int gcd = 0;
	if(firstInt >= secInt)
	{
		for(int i = 1; i < firstInt; i++)
		{
			if((firstInt%i == 0) && (secInt%i == 0))
				gcd = i;
		}
	}
	else
	{
		for(int i = 1; i < secInt; i++)
		{
			if((firstInt%i == 0) && (secInt%i == 0))
				gcd = i;
		}	
	}
	cout << gcd << '\n';
}

// vim:foldlevel=2
