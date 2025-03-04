// #define _GLIBCXX_DEBUG 1
#include <iostream>
#include <vector>
using namespace std;

/* this should reverse the contents of whatever vector you give it */
void reverse(vector<int>& V)
{
	/* IDEA: swap i <--> n-1-i over and over */
	size_t n = V.size(); /* reminder: size_t is an UNSIGNED integer
	                        which is as large as a CPU register.  This
							happens to be the return type of V.size(). */
	for (size_t i = 0; i < n/2; i++) {
		/* swap V[i] with V[n-1-i] */
		swap(V[i],V[n-1-i]);
	}
}

int main()
{
	/* read vector from standard input and try out our reverse function */
	vector<int> V;
	int x; /* for input */
	while (cin >> x) {
		V.push_back(x);
	}
	reverse(V);
	/* NOTE: cout << V; doesn't work!  We have to print the elements one by one. */
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	cout << "\n";
}

// vim:foldlevel=2
