#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* read integers from standard input and print them in reverse order */
int main()
{
	vector<int> V; /* NOTE: datatype of V is vector<int> */
	int x; /* for the next input */
	while (cin >> x) {
		/* add x to the vector: */
		V.push_back(x);
	}
	/* now V[0] will be the first thing we've read, V[1] the second,
	 * and so on, until V[V.size()-1] */
	/* print them back in reverse: */
	// for (int i = V.size()-1; i >= 0; i--) {
	#if 0
	for (size_t i = V.size()-1; i < V.size(); i--) {
		/* TODO: make sure you understand how i < V.size() makes sense here. */
		cout << V[i] << " ";
	}
	#endif
	/* alternatively, we could have the indexes go forward and compute the
	 * index of what we want to print (think of i now as distance from the end). */
	for (size_t i = 0; i < V.size(); i++) {
		/* TODO: make sure you understand how i < V.size() makes sense here. */
		cout << V[(V.size()-1) - i] << " ";
	}
	cout << "\n";
}

// vim:foldlevel=3
