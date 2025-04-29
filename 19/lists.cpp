#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

void clear(node*& L)
{
	while (L) { /* same as L != NULL */
		node* p = L;
		L = L->next;
		delete p;
	}
	/* NOTE: L will be NULL at the end of this loop */
}

int main()
{
	node* L = NULL;
	int x;
	while (cin >> x) {
		node* p = new node;
		p->data = x;
		p->next = L;
		L = p;
	}
	/* print the list contents */
	node* p = L;
	while (p != NULL) { /* same as while(p) */
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n";
}

// vim:foldlevel=2
