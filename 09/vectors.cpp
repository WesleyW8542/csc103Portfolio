// #define _GLIBCXX_DEBUG 1
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	/* NOTE: be careful to not access elements OUT OF BOUNDS in a vector
	 * (below 0, or V.size() and above).  You might access out of bounds
	 * elements and not even realize it! */
	vector<int> V = {1,2,3,4,5};
	for (size_t i = 0; i < 10; i++) {
		cout << V[i] << " ";
	}
	/* NOTE: the above will print whatever happens to be in memory that the
	 * locations corresponding to V[5..9], even though they are not elements
	 * of V!  You can fix this by  */
	cout << "\n";
	return 0;
}
