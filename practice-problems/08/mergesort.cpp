/* TODO: Try to write merge sort!  Prototypes are given below using vectors,
 * but if you would prefer, arrays are fine too. */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;

/* This should take two SORTED vectors, L and R, and return another vector
 * which is sorted and contains all values from L and R. */
vector<int> merge(const vector<int>& L, const vector<int>& R);

void mergeSort(vector<int>& V);

int main()
{
	/* TODO: write some code here in main to test your function. */
	vector<int> data;
	int x;
	while (cin >> x) data.push_back(x);

	mergeSort(data);

	for (int i = 0; i < data.size(); i++) 
	{
		cout << data[i] << " ";
	}
	cout << endl;
	return 0;
}

vector<int> merge(const vector<int>& L, const vector<int>& R) {
	vector<int> result;
	int i = 0, j = 0;
	while (i < L.size() && j < R.size())
	{
		if (L[i] < R[j]) {
			result.push_back(L[i]);
			i++;
		} else 
		{
			result.push_back(R[j]);
			j++;
		}
	}
	while (i < L.size()) 
	{
		result.push_back(L[i]);
		i++;
	}
	while (j < R.size()) 
	{
		result.push_back(R[j]);
		j++;
	}
	return result;
}

void mergeSort(vector<int>& V) 
{
	if (V.size() <= 1) 
	{
		return;
	}  

	int mid = V.size() / 2;
	vector<int> left(V.begin(), V.begin() + mid);
	vector<int> right(V.begin() + mid, V.end());

	mergeSort(left);
	mergeSort(right);

	V = merge(left, right);
}
// vim:foldlevel=2
