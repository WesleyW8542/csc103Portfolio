#include <iostream>
using std::cin;
using std::cout;

void swap(int& x, int& y);
/* NOTE: above is called a function *prototype* */

int main()
{
	int a=23,b=77;
	printf("a == %i, b == %i\n",
			      a,      b);
	swap(a,b);
	printf("a == %i, b == %i\n",a,b);
}

// vim:foldlevel=3
