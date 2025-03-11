// #define _GLIBCXX_DEBUG 1
#include <iostream>
#include <vector>
using namespace std;

/* add new element to the front of a vector */
void push_front(vector<int>& V, int x)
{
	size_t n = V.size();
	V.resize(n+1); /* add one extra element */
	/* now copy to the right, starting from the end, working backwards: */
	for (size_t i = n; i > 0; i--) {
		V[i] = V[i-1];
	}
	V[0] = x;
}

int main()
{
	vector<int> V;
	int x;
	while (cin >> x) {
		push_front(V,x);
	}
	#if 0
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	cout << "\n";
	#endif
	cout << "size of V: " << V.size() << "\n";
}

// vim:foldlevel=2
