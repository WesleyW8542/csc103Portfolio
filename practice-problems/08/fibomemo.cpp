/* TODO: write a recursive function to compute terms of the Fibonacci sequence,
 * but make it efficient (or at least, not terribly inefficient) by way of
 * "memoization".  That is, add some memory to your function, perhaps in the
 * form of a static variable of type vector<int>.  Then, before making any
 * recursive calls, check the vector to see if you haven't computed that term
 * before.  In case you need more to go on, the idea is that your vector (let's
 * call it A for "answers") should be such that if n < A.size(), then A[n]
 * is the n-th term in the sequence.  */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

int main()
{
	/* TODO: write some code here in main to test your function.  Be sure to
	 * call it on inputs > 50 to check for efficiency (the naive solution would
	 * take at least a few seconds on such an input, even on a fast computer).
	 * NOTE: you should be able to compute about 93 terms before the result no
	 * longer fits in a size_t on a 64 bit machine. */
	return 0;
}

// vim:foldlevel=2
