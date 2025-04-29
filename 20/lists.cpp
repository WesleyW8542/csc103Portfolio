#include <iostream>
#include <vector>
using namespace std;

struct node {
	int data;
	node* next;
	node(int d=0, node* n=NULL)
	{
		data = d;
		next = n;
	}
};

/* remove first occurence of x in list pointed to by L */
bool remove_first(node*& L, int x)
{
	/* NOTE: L is by reference in case we remove the first node */
	node* p = L;
	node* q = NULL;
	while (p && p->data != x) {
		q = p;
		p = p->next;
	}
	/* loop ends if (a) we ran out of nodes, or (b) found x */
	if (!p) return false; /* ran out of nodes */
	if (q) q->next = p->next;
	else   L = p->next;
	delete p;
	return true;
}

/* TODO: see if you can understand how this works! */
node* vec2list(const vector<int>& V)
{
	node* L = NULL;
	node** p = &L;
	for (size_t i = 0; i < V.size(); i++) {
		*p = new node(V[i]);
		p = &((*p)->next);
	}
	return L;
}

int main()
{
	node* L = vec2list({1,3,5,7,9,11,13,15});
	/* and now test out our function for removing nodes... */
	int x;
	while (cin >> x) {
		bool removed = remove_first(L,x);
		if (removed) cout << x << " was removed\n";
		else cout << x << " not found in list\n";
		/* TODO: should probably print list contents each time... */
	}
}

// vim:foldlevel=2
