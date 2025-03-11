// #define _GLIBCXX_DEBUG 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> V;
	int x;
	while (cin >> x) {
		V.push_back(x);
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
