/* TODO: write a function to append a new node with a given value to
 * the end of a list.  NOTE: the return value should be a pointer to
 * the newly allocated node.  This will make it more efficient to
 * construct a list by appending over and over, since you don't have
 * to start from the beginning each time and find the end.  (Although
 * your function should work no matter what, and always find the end
 * of the list before appending).  */
#include <iostream>
using std::cout;
using std::cin;
#include "list-utils.h"

void clear(node* &head) {
	while (head != nullptr) {
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

node* append(node* L, int x)
{
	/* TODO: write me */
	node* newNode = new node(x, nullptr);
	if (L == nullptr) {
		return newNode;
	}
	node* p = L;
	while (p->next != nullptr) {
		p = p->next;
	}
	p->next = newNode;
	return newNode;
}

int main()
{
	/* TODO: use your function to build a list from stdin by appending
	 * over and over. */
	node* head = nullptr;
	node* tail = nullptr;
	int x;
	while (cin >> x) {
		if (head == nullptr) {
			head = append(nullptr, x);
			tail = head;
		} else {
			tail = append(head, x);
		}
	}
	printlist(head);
	clear(head); 
	return 0;
}

// vim:foldlevel=2
