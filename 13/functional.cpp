// #define _GLIBCXX_DEBUG 1
#include <iostream>
#include <vector>
using namespace std;

/* The following two lines specify new data types.  The first
 * refers to functions that return void and take an integer by reference.
 * The second refers to functions that return an integer and take two
 * integers as input.  The names of the types are transform and binaryop,
 * respectively. */
typedef void (*transform)(int&);
typedef int (*binaryop)(int,int);
/* NOTE: typedef allows you to give a datatype a synonym.  E.g., if we
 * wanted to call the int type Z, we could do this: */
typedef int Z;

/* examples of things of type transform: */
void addone(int& x) { x++; }
void multwo(int& x) { x*=2; }
/* examples of things of type binaryop: */
int add(int x, int y) { return x+y; }
int mul(int x, int y) { return x*y; }
/* TODO: write functions for min and max as well and test them out. */

int fold(const vector<int>& V, binaryop b, int start)
{
	int s = start;  /* this will be the result */
	for (size_t i = 0; i < V.size(); i++) {
		s = b(s,V[i]);
	}
	return s;
}

int main()
{
	#if 0
	Z x,y;
	cin >> x >> y;
	cout << x+y << "\n";
	#endif
	int x; /* input */
	vector<int> V;
	while (cin >> x) {
		V.push_back(x);
	}
	cout << " sum is " << fold(V,add,0) << "\n";
	cout << "prod is " << fold(V,mul,1) << "\n";
}

// vim:foldlevel=2
