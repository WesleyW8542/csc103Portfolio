#include <iostream>
using namespace std;

/* nonsense function to demonstrate functions */
int f(); /* "there exists a function named f" */
/* here's how to prescribe what f does: */
int f()
{
	cout << "hello from f\n";
	/* NOTE: the "int" above says that this function is supposed
	 * to produce an integer result.  How do we say what the result is? */
	return 99; /* answer: the return statement */
}

/* functions can also take inputs: */
int g(int x) /* g is a function that takes an integer and produces an integer result */
{
	x = x+5;
	cout << "in g(...), x is " << x << "\n";
	return x;
}
/* NOTE: the default behavior for function parameters is that
 * the function will operate on a COPY of whatever you give it.
 * NOTE: you can change this behavior if you want: */
int h(int& z)
{
	z = z+5;
	cout << "in h(...), z is " << z << "\n";
	return z;
}

int main()
{
	/* how to use f from another function? */
	int retval = f(); /* this is called a "function call" */
	cout << "return value from f: " << retval << "\n";
	int x,y;
	x = 10;
	y = g(x);
	y = h(x);
	// y = g(123);  // this is OK
	// y = h(123);  // this is NOT!
	/* litmus test for whether or not something can be put into a reference
	 * parameter: would it make sense as the left hand side of an assignment? */
	// 123 = 234234;  // looks wrong...indeed, above would not compile.
	cout << "return value from g(x): " << y << "\n";
	cout << "x in main: " << x << "\n";
}

// vim:foldlevel=3
