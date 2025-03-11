// #define _GLIBCXX_DEBUG 1
#include <iostream>
#include <vector>
using namespace std;

/* function that will take a vector and a target t and search for a
 * pair of indexes i =/= j such that V[i] + V[j] == t. */
bool subsetsum(const vector<int>& V, int t)
{
	/* NOTE: due to the const modifier, we cannot do anything in here
	 * that would modify V!  E.g., the following would not compile: */
	// V[0] = 9;
	/* Think of the combo const+& as an efficient way to "fake" a by-value
	 * (no &) parameter.  See also "const correctness" in C/C++ (disregard
	 * the stuff about pointers for now...). */
	size_t n = V.size();
	for (size_t i = 0; i < n-1; i++) {
		for (size_t j = i+1; j < n; j++) {
			if (V[i]+V[j] == t)
				return true;
		}
	}
	return false;
}

int main()
{
	vector<int> V = {2,8,9,-10};
	int t;
	while (cin >> t) {
		cout << subsetsum(V,t) << "\n";
	}
}

// vim:foldlevel=2
