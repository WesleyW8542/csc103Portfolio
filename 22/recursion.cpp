#include <iostream>
using std::cout;
using std::cin;

void nonsense(int n)
{
	if (n == 0) {
		cout << "stopping at 0\n";
		return;
	}
	cout << "about to call  " << n-1 << "\n";
	nonsense(n-1);
	cout << "came back from " << n-1 << "\n";
}

size_t f(size_t n) /* computes n! */
{
	if (n == 0) return 1;
	return n*f(n-1);
}

/* fibonacci sequence: 1 1 2 3 5 8 13... */
/*           input:    0 1 2 3 4 5 6 ... */
size_t fib(size_t n)
{
	if (n < 2) return 1;
	/* now assume this thing works for any smaller values of n */
	return fib(n-1) + fib(n-2);
}

int main()
{
	#if 1
	size_t x;
	while (cin >> x)
		// printf("%lu! == %lu\n",x,f(x));
		printf("fib(%lu) == %lu\n",x,fib(x));
	#endif
	// nonsense(5);
	return 0;
}

// vim:foldlevel=2
