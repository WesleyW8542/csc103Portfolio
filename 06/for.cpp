#include <iostream>
using namespace std;

int main()
{
	#if 0
	int i;
	for (i = 0; i < 10; i++) {
		cout << "hello\n";
	}
	cout << "i == " << i << "\n";
	#endif
	#if 0
	/* NOTE: braces can be used to define a scope: */
	{
		int j;
		j = 34;
	}
	cout << j << "\n";
	#endif
	/* exercise: print an nxm rectanle of * characters, where
	 * n,m are read from standard input.  E.g. if n = 4, m = 5:
	 *         * * * * *
	 *         * * * * *
	 *         * * * * *
	 *         * * * * *
	 * */
	/* IDEA: use nested for loops.  The inside one's job is to
	 * print a single row. */
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		/* The body of this loop should print a single row of m stars.
		 * We'll use another loop for that. */
		for (int j = 0; j < m; j++) {
			// cout << "* ";
			cout << "(" << i << "," << j << ") ";
		}
		cout << "\n"; /* end the row. */
	}
	/* exercise: compute the gcd of n and m.
	 * IDEA: start from largest possible thing (min(n,m)) and then
	 * go backwards looking for a common divisor. */
	int d = m;
	if (n < d) {
		d = n;
	}
	/* at this point, d is min(n,m) */
	for (; d >= 1; d--) {
		/* test if d is a common divisor */
		if (n%d == 0 && m%d == 0) {
			break;
		}
	}
	cout << "gcd was " << d << "\n";
}

// vim:foldlevel=3
