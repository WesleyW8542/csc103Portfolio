/* TODO: write a function which takes a vector of integers V and a target
 * value t and returns true if and only if there are indexes i != j such
 * that V[i]+V[j] == t.  Bonus question: find a way find a way to modify
 * your function so that the caller can also see what values of i,j work
 * in the case where the return value is true.  The challenge is to figure
 * out how to give 3 outputs from a function instead of just one.
 * HINT: maybe think about value vs reference parameters...  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
bool sumOfTwo(vector<int> V, int t)
{
	for(size_t i = 0; i < V.size(); i++)
	{
		for(size_t j = i + 1; j < V.size(); j++)
		{
			if(V[i] + V[j] == t)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	/* TODO: call your function, make sure it works... */
	vector<int> a = {4,5,6,7};
	int num = 8;
	bool answer = sumOfTwo(a, num);
	cout << answer <<'\n';
	return 0;
}

// vim:foldlevel=2
