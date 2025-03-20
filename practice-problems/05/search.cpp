/* TODO: write a function which takes a vector of integers V and an integer x
 * and returns a boolean indicating whether or not x was found in the elements
 * of V. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

bool search(vector<int> a, int b)
{
	for(int i; i < a.size(); i++)
	{
		if((a[i] == b))
		{
			return true;
		}
	}
	return false;
}

int main()
{
	vector <int> ex = {4,5,10,6};
	int find1 = 10;
	int find2 = 30;
	cout << search(ex, find1) << '\n';
	cout << search(ex, find2) << '\n';
	return 0;
}

// vim:foldlevel=2
