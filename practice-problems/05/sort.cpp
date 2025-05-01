/* TODO: write a function which takes a vector of integers V and places
 * the elements in sorted order (that is, i<=j ==> V[i]<=V[j]).
 * NOTE: there is a simple solution in l3.pdf if you get stuck, but it's
 * a pretty good exercise if you work it out yourself. */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
void sort(vector<int>& V)
{
    for (size_t i = 0; i < V.size(); ++i)
    {
        size_t position = i;
        for (size_t j = i + 1; j < V.size(); ++j)
        {
            if (V[j] < V[position])
            {
                position = j;
            }
        }
        int temp = V[i];
        V[i] = V[position];
        V[position] = temp;
    }
}

int main()
{
	/* TODO: call your function, make sure it works... */
	vector<int> V = {9, 4, 2, 8, 1};

    sort(V);

    for(int i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }
    cout << "\n";

	return 0;
}

// vim:foldlevel=2
