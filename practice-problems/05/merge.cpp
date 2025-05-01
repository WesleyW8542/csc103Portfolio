/* TODO: write a function which takes two vectors of integers V1 and V2,
 * *which you assume will be SORTED*.  (That is, i<=j ==> V1[i]<=V1[j], and
 * similarly for V2).  The function should merge these two vectors into a
 * third vector which is also sorted.
 * NOTE: do NOT do this by just adding all elements into the 3rd vector and
 * then sorting that.  You can do this much more efficiently since the input
 * vectors are sorted already.  Your function should take a number of steps
 * proportional to the sum of the sizes of V1 and V2.  */

#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* your answer goes here... */
vector<int> merge(vector<int>& V1, vector<int>& V2)
{
	vector<int> answer;
	size_t V1Added = 0, V2Added = 0;
	while(V1Added < V1.size() && V2Added < V2.size())
	{
		if(V1[V1Added] <= V2[V2Added])
		{
			answer.push_back(V1[V1Added]);
			V1Added++;
		}
		else 
		{
			answer.push_back(V2[V2Added]);
			V2Added++;
		}
	}

	while(V1Added < V1.size())
	{
		answer.push_back(V1[V1Added]);
		V1Added++;
	}

	while(V2Added < V2.size())
	{
		answer.push_back(V2[V2Added]);
		V2Added++;
	}
	return answer;
}
int main()
{
	/* TODO: call your function, make sure it works... */
	vector<int> V1 = {1, 2, 5, 7};
	vector<int> V2 = {2, 3, 5, 8};

	vector<int> merged = merge(V1, V2);
	for (int i = 0; i < merged.size(); i++)
	{
		cout << merged[i] << " ";
	}
	cout << "\n";

	return 0;
}
// vim:foldlevel=2
