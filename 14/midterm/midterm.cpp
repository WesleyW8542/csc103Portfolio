#include <iostream>
#include <vector>
using namespace std;

/* Q4 */
/* sketch: first make a vector for the counts (frequencies):
 * vector<size_t> F(256,0);
 * Then read characters over and over and do F[c]++;
 * At this point, you have what you need, more or less.
 * Nice solution would use data structures we haven't learned (hash map,
 * or similar), but another way is to just compare each frequency with
 * every other frequency...
 * */

/* Q3 */
/* part a: write the shift thing */
void shift(vector<int>& V)
{
	for (size_t i = V.size()-1; i > 0; i--)
		V[i] = V[i-1];
}
/* part b */
int prg(vector<int>& R, const vector<int>& T, const int m)
{
	int x = 0; /* store sum of blue dots */
	/* add together the blue dot locations in the vector: */
	for (size_t i = 0; i < T.size(); i++) {
		x += R[T[i]];
	}
	shift(R);
	R[0] = x % m;
	return R[0];
}

int main(void)
{
	vector<int> R = {1,2,3,4,5};
	vector<int> T = {1,3,4};
	int m = 7;
	for (size_t i = 0; i < 20; i++) {
		cout << prg(R,T,m) << "\n";
	}
	return 0;
}

/* Q2 */
#if 0
int main(void)
{
	int x;
	vector<size_t> C = {0,0,0,0,0}; /* for the counts */
	while (cin >> x) {
		/* we'll assume all inputs are from 0 to 49 */
		C[x/10]++;
	}
	/* we have everything we need now for the ouput: */
	for (size_t i = 0; i < 5; i++) {
		cout << i << ": ";
		for (size_t j = 0; j < C[i]; j++)
			cout << "#";
		cout << "\n";
	}
	return 0;
}
#endif

/* Q1 */
#if 0
int main(void)
{
	int x; /* input */
	while (cin >> x) {
		/* test if x is the cube of an integer... */
		if (x < 0) x *= -1; /* x has integer cube root <==> -x has one */
		/* use brute force: start with smallest possible value for cube root
		 * and increment. */
		int y = 0;
		while (y*y*y < x)
			y++;
		cout << (y*y*y == x) << "\n";
	}
	return 0;
}
#endif
