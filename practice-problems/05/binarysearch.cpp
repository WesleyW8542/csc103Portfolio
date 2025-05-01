/* TODO: write a function which takes a *sorted* vector of integers V
 * and an integer x and performs a *binary search* for x.  The idea is
 * that since the vector is sorted, you can look at the middle element
 * and then rule out half of the vector from the search.  Just keep on
 * doing that until you find x or you run out of places to look. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
int binary_search(vector<int>&V, int x)
{
	int left = 0;
	int right = V.size() - 1;

	while(left <= right)
	{
		int mid = left + (right - left) / 2;

		if(V[mid] == x)
		{
			return mid;
		}
		else if(V[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}

int main()
{
	/* TODO: call your function, make sure it works... */
	vector<int> ex = {2,4,6,8,10};
	int find = 7;
	int result = binary_search(ex, find);
	cout << result << '\n';

	return 0;
}

// vim:foldlevel=2
