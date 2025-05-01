/* TODO: write a function which takes a vector of integers V (by reference)
 * and reverses its contents.  That is, if V = 1 2 3, then after calling
 * reverse(V), it would contain 3 2 1.  NOTE: the goal is not to print
 * anything, but to rearrange the vector elements in memory. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

void reverse(vector<int>& a)
{
	int n = a.size();
	for (int i = 0; i < n/2; i++)
	{
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

int main()
{
	/* TODO: call your function, make sure it works... */
	vector<int> v = {4,5,6};
	reverse(v);

	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << '\n';

	vector<int> s = {4,5,6,7};
	reverse(s);

	for(int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
	cout << '\n';
	return 0;
}

// vim:foldlevel=2
