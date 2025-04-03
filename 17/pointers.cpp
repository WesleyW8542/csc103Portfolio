#include <iostream>
using namespace std;

/* function to resize a dynamically allocated array
 * (NOTE: in real life, just call realloc...)
 * Goal: call resize(A,n,m) on an array of n elements
 * and afterward it will have m elements. */
void resize(int*& A, size_t n, size_t m)
{
	/* NOTE: it is crucial that the first parameter is by reference (&).
	 * If not, step 4 (A=B) will only affect a local copy of the pointer. */
	/* STEP 1: allocate new, bigger chunk. */
	int* B = new int[m];
	/* STEP 2: copy (assuming that m > n). */
	for (size_t i = 0; i < n; i++)
		B[i] = A[i];
	/* STEP 3: clean up old array, no longer in use: */
	delete A;
	/* STEP 4: make A point to the new chunk: */
	A = B;
}
/* NOTE: in contrast with vectors, arrays do NOT know their own size! 
 * You have to keep track of this yourself in a separate variable. */



int main()
{
	/* NOTE: when you add an offset to a pointer, it will be scaled
	 * by the size of the datatype: */
	int x = 9; /* 4 bytes */
	char c = 'a'; /* 1 byte */
	int* p = &x; /* make p point to x */
	char* q = &c; /* make q point to c */
	for (size_t i = 0; i < 4; i++) {
		printf("(p + %lu) == %p\n",i,p+i);
	}
	for (size_t i = 0; i < 4; i++) {
		printf("(q + %lu) == %p\n",i,q+i);
	}
	/* the above scaling is what makes A[i] make sense!
	 * Remember: A[i] is the same as *(A+i). */
	/* Testing out our resize function: */
	size_t n = 2; /* size of A */
	size_t k = 0; /* where to place next element (how much of A is used) */
	int* A = new int[n];
	while (cin >> x) {
		if (k >= n) { /* need more space... */
			resize(A,n,2*n); /* make it twice as big */
			n *= 2;
		}
		A[k++] = x;
	}
	/* print contents: */
	for (size_t i = 0; i < k; i++) {
		printf("A[%lu] = %i\n",i,A[i]);
	}
	/* NOTE: if you declare a *static* array, like the following,
	 * then you can NOT resize it.  Why?  There is no explicit
	 * pointer to the first element like there is for a dynamically allocated
	 * array -- elements are accessed by offsets from call stack pointers. */
	int array[99];
	return 0;
}

// vim:foldlevel=2
