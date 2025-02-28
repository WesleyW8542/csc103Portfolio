#include <iostream>
using std::cin;
using std::cout;

void swap(int& x, int& y);

int main()
{
	int a=23,b=77;
	printf("a == %i, b == %i\n",
			      a,      b);
	swap(a,b);
	printf("a == %i, b == %i\n",a,b);
}

/* function to swap contents of two variables: if you call swap(x,y),
 * then afterwards, y will have x's value and vice versa. */
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
	/* NOTE: there is a clever way you can do this without the temporary
	 * variable t...  think about algebra maybe... */
}

// vim:foldlevel=3
