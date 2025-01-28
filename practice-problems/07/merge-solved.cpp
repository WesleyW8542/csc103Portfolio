/* TODO: Write a function that takes two pointers to linked lists
 * which you can assume are in SORTED ORDER already.  The function
 * should then build a new list which is also in sorted order and
 * return it.
 * Bonus problem: re-write your function (or make a new version)
 * which does NOT allocate any memory, and instead just re-uses the
 * nodes from the two input lists.  */
#include <iostream>
using std::cout;
using std::cin;
#include "list-utils.h"

node* merge(node* L1, node* L2)
{
	node F; /* fake node to remove special cases: */
	node* p = &F; /* p tells us where to attach next node */
	while (L1 && L2) {
		if (L1->data < L2->data) {
			p->next = new node(L1->data);
			L1 = L1->next;
		} else {
			p->next = new node(L2->data);
			L2 = L2->next;
		}
		p = p->next;
	}
	while (L1) {
		p->next = new node(L1->data);
		L1 = L1->next;
		p = p->next;
	}
	while (L2) {
		p->next = new node(L2->data);
		L2 = L2->next;
		p = p->next;
	}
	return F.next;
}

/* bonus version, which is destructive of the original lists: */
node* merge2(node* L1, node* L2)
{
	/* in case one list is empty, return the other: */
	if (!L1) return L2;
	if (!L2) return L1;
	node* L;
	if (L1->data < L2->data) {
		L = L1;
		L1 = L1->next;
	} else {
		L = L2;
		L2 = L2->next;
	}
	node* p = L;
	while (L1 && L2) {
		if (L1->data < L2->data) {
			p->next = L1;
			L1 = L1->next;
		} else {
			p->next = L2;
			L2 = L2->next;
		}
		p = p->next;
	}
	p->next = (node*)(reinterpret_cast<size_t>(L1) ^ reinterpret_cast<size_t>(L2));
	return L;
}

int main()
{
	/* some test code for your function: */
	node* L1 = buildlist({1,5,7,11,13});
	node* L2 = buildlist({2,3,4,8});
	printlist(L1);
	printlist(L2);
	// node* L = merge(L1,L2);
	node* L = merge2(L1,L2);
	printlist(L);
	return 0;
}

// vim:foldlevel=2
