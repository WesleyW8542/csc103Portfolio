/* TODO: write a function which takes a *sorted* vector of integers V
 * (that is, i<=j ==> V[i]<=V[j]) and returns a vector of the unique
 * elements of V.  That is to say, all duplicates have been removed.
 * For example, if V = {1,2,2,3,3,3,4}, the resulting vector should
 * contain {1,2,3,4}.  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
vector<int> unique(vector<int>& V)
{
	vector<int> ans;
	int last = V[0];
	ans.push_back(last);
	for(int i = 1; i < V.size(); i++)
	{
		if(V[i] != last) 
		{
			ans.push_back(V[i]);
			last = V[i];
		}
	}
	return ans;
}

int main()
{
	/* TODO: call your function, make sure it works... */
	vector<int> V = {1, 2, 2, 3, 3, 3, 4};

    vector<int> result = unique(V);

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
	return 0;
}

/* TODO: bonus question: write another version of this function which
 * actually removes the duplicates from the input vector rather than
 * returning an altogether new vector.  NOTE: you could of course do
 * the same thing as before, and then overwrite your original vector,
 * but that's not what I want.  Don't allocate any other vectors, and
 * don't use the "erase" function either.  Just rearrange the elements
 * somehow and then call V.resize(...). */

// vim:foldlevel=2
