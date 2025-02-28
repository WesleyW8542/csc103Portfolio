#include <iostream>
using std::cin;
using std::cout;

/* TODO: read two integers n,m and draw (using some for loops) a
 * rectangle of '*' characters that is nxm.  E.g. if n = 3, m = 4
 * then output would be like this: */
// * * * *
// * * * *
// * * * *

int main()
{
	int n,m;
	n = 3;
	m = 4;
	for(int i = 0; i < n; i++)
	{
		if(i != 0)
		{
			cout << '\n';
		}
		for(int j = 0; j < m;j++)
		{
			cout << "* ";
			
		}
	}
}

/* Bonus question: change the above so you get a "hollow" rectangle.
 * E.g. if n==4 and m==5, you would have this: */
// * * * * *
// *       *
// *       *
// * * * * *


// vim:foldlevel=2
