#include <iostream>
using namespace std;

/* implementation of our state diagram for counting words */

int main()
{
	bool justreadspace = true; /* true: token in left state; false: in right state */
	size_t count = 0;
	char c;
	while (scanf("%c",&c) == 1) {
		/* NOTE: we don't use cin as it will skip whitespace characters by default. */
		if (justreadspace) { /* token is currently in the left state */
			if (c != ' ' && c != '\t' && c != '\n') {
				count++; /* found a new word */
				/* move token to the other state: */
				justreadspace = false;
			} else {
				/* nothing to do... */
			}
		} else { /* token is on the right */
			if (c != ' ' && c != '\t' && c != '\n') {
				/* nothing to do */
			} else {
				justreadspace = true;
			}
		}
	}
	cout << "# words: " << count << "\n";
	return 0;
}

// vim:foldlevel=2
