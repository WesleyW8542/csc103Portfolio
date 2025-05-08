#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* TODO: As you may have seen in class, we can make functions which take *other
 * functions* as parameters.  Try to use this exciting new technology to write
 * a function called map which takes a vector of integers and a transformation
 * t which modifies a single integer, and then applies that transformation to
 * every element of the vector.  The following typedef is suitable for the
 * function type for t: */
typedef void (*transformation)(int&);
/* In case it helps, here is an example of a function of the above type: */
void addone(int& x) 
{ 
	x++; 
}

/* your answer goes here... */
void map(vector<int>& V, transformation t)
{
	for (size_t i = 0; i < V.size(); i++) 
	{
		int& x = V[i]; 
		t(x);          
	}
}

void times_two(int& x) 
{
	x *= 2;
}

void parity(int& x) 
{
    if (x % 2 == 0) 
	{
        // If x is even
        x = 1;
    } else 
	{
        // If x is odd
        x = 0;
    }
}
/* TODO: once you have the map function written, use it to
 * 1. increment every element of a vector (you can use addone above)
 * 2. multiply every element of a vector by 2
 * 3. replace each element with a 1 if it is even, and 0 if it is odd
 * */

int main()
{
	vector<int> V = {1, 2, 3, 4, 5};

    map(V, addone);
    cout << "After addone: ";
    for (int i = 0; i < V.size(); i++) 
    {
        cout << V[i] << " ";
    }
    cout << '\n';


    map(V, times_two);
    cout << "After times_two: ";
    for (int i = 0; i < V.size(); i++) 
    {
        cout << V[i] << " ";
    }
    cout << '\n';

    map(V, parity);
    cout << "After parity: ";
    for (int i = 0; i < V.size(); i++) 
    {
        cout << V[i] << " ";
    }
    cout << '\n';

	return 0;
}

// vim:foldlevel=2
