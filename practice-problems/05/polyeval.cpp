/* TODO: Write a function that evaluates a polynomial at a given input.
 * To represent the polynomial, use a vector (say of integers) which will
 * correspond to the coefficients.  That is, if your polynomial is:
 * f(X) = C_0 + C_1*X + C_2*X^2 + ... + C_d*X^d
 * then f would be given as a vector C such that C[i] = C_i.
 * For your function, please use the prototype given below.
 * */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

int polyeval(const vector<int>& C, int x);

int polyeval(const vector<int>& C, int x)
{
	int ans = 0;
    int power = 1; 

    for (int i = 0; i < C.size(); i++)
    {
        ans += C[i] * power;
        power *= x; 
    }

    return ans;
}

int main()
{
	/* TODO: once you have written polyeval, add some test code here */
	vector<int> C = {1, 2, 3}; 
    int x = 2;

    int result = polyeval(C, x);
    cout << result << "\n"; 
	return 0;
}
// vim:foldlevel=2
