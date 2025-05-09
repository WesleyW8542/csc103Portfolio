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
	/* TODO: write me */
	node* head = nullptr;
	node* tail = nullptr;

	while (L1 || L2)
	 {
		int val;
		if (L1 && (!L2 || L1->data < L2->data)) 
		{
			val = L1->data;
			L1 = L1->next;
		} 
		else 
		{
			val = L2->data;
			L2 = L2->next;
		}

		node* newNode = new node(val);
		if (!head) 
		{
			head = tail = newNode;
		} 
		else 
		{
			tail->next = newNode;
			tail = newNode;
		}
	}

	return head;
}

int main()
{
	/* some test code for your function: */
	node* L1 = buildlist({1,5,7,11,13});
	node* L2 = buildlist({2,3,4,8});
	printlist(L1);
	printlist(L2);
	node* L = merge(L1,L2);
	printlist(L);
	return 0;
}

// vim:foldlevel=2
