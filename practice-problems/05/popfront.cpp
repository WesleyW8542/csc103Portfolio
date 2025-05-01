/* TODO: write a function called "pop_front" which will remove the first
 * element of a vector.  NOTE: unlike pop_back, which is a *member function*
 * of the vector, your function will take a vector parameter.  So instead of
 * calling V.pop_front(), you would do pop_front(V).  Use the function header
 * given below. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here: */
void pop_front(vector<int>& V)
{
	if(V.size() != 0)
	{
		for(size_t i = 1; i < V.size(); i++)
		{
			V[i - 1] = V[i];
		}
		V.pop_back();
	}
}

int main()
{
	/* TODO: call your function, make sure it works... */
	vector<int> v = {6,10,15};
	pop_front(v);

	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << '\n';
	return 0;
}

// vim:foldlevel=2
