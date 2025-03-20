/* TODO: write a function which takes a vector of integers V and an
 * integer d and returns another vector containing only the elements
 * of V which are divisible by d.  ("x is divisible by d" means that
 * there exists another integer q such that x == dq.  That is, when
 * you divide x by d, there's no remainder.) */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

vector<int> divisible(vector<int> a, int d)
{
	vector<int> result;
	for(int i = 0; i < a.size();i++)
	{
		if(a[i]%d == 0)
		{
			result.push_back(a[i]);
		}
	}
	return result;
}

int main()
{
	int divisor = 3;
	vector<int> ex = {1,6,9,10,17,18};
	vector<int> answer = divisible(ex, divisor);
	for(int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << " ";
	}
	cout << '\n';
	return 0;
}

// vim:foldlevel=2
