#include <iostream>
using std::cout;
using std::cin;

struct node {
	int   data;
	node* next;
	/* constructor, in case you want to use it: */
	node(int d=0, node* n=NULL) : data(d), next(n) {}
};

int main()
{
	/* TODO: read integers from stdin and insert each one to the front
	 * of a linked list. */
	node* L = NULL;
	int x;
	while (cin >> x) 
	{
		L = new node(x, L);
	}
	/* TODO: print the list back out so you know it worked. */
	for (node* curr = L; curr != NULL; curr = curr->next) 
	{
		cout << curr->data << " ";
	}
	cout << "\n";

	while (L != NULL) 
	{
		node* temp = L;
		L = L->next;
		delete temp;
	}
	return 0;
}

// vim:foldlevel=2
