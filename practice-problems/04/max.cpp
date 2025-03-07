/* TODO: write a function which takes three integer parameters and returns
 * the largest one. */

#include <iostream>
using std::cin;
using std::cout;
 
int largest(int a, int b, int c)
{
	if(a > b && a > c)
	{
		return a;
	}
	else if(b > a && b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	// TODO: call your function, make sure it works...
	cout << "The largest number is " << largest(x,y,z) << '\n';
}
 
// vim:foldlevel=2