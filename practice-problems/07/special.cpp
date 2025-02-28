/* You probably have noticed by now that a special case is often required
 * for the empty list, since in that case you need to modify the pointer L,
 * which is NOT the `->next` of any node.  You should have encountered this
 * in solving remove.cpp and merge.cpp.
 * TODO: try to rewrite remove.cpp and / or merge.cpp so that you don't need
 * any special cases for the beginning of the list.  Two approaches come to
 * mind: (1) use a "fake" node before the first node so that its `->next` is
 * pointing to the first node (same *value* as pointer L).  (2) Add another
 * layer of indirection!  Use *pointers to pointers* to go through the list,
 * tracking the sequence of pointers, rather than the nodes themselves. */

#include <iostream>
using std::cout;
using std::cin;
/* NOTE: the node structure, as well as some utility functions used in
 * main() are in list-utils.h which we include here. */
#include "list-utils.h"

bool remove(node*& L, int x)
{
	/* TODO: (re)write me */
	return false; /* just so it compiles... */
}

int main()
{
	/* NOTE: some test code for you is given below.  It reads integers
	 * from stdin and tries to remove them from a hard-coded list. */
	node* L = buildlist({1,3,5,7,9,11,13});
	printlist(L);
	int x;
	while (cin >> x) {
		printf("%i was %sremoved\n",x,remove(L,x)?"":"not ");
		printf("new list contains:\n");
		printlist(L);
	}
	return 0;
}

// vim:foldlevel=2
