/* TODO: write a function (recursion isn't a bad idea) which takes an integer
 * n and returns a vector of all binary strings of length n.
 * E.g., if n = 3, output vector should contain the following strings:
 * 000
 * 001
 * 010
 * 011
 * 100
 * 101
 * 110
 * 111
 * */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

vector<string> generateBinary(int n) {
	if (n == 0) 
	{
		return {""};
	}
	vector<string> smaller = generateBinary(n - 1);
	vector<string> result;
	for (int i = 0; i < smaller.size(); i++) {
		result.push_back("0" + smaller[i]);
		result.push_back("1" + smaller[i]);
	}
	return result;
}

int main()
{
	/* TODO: write some test code here */
	int n;
	cin >> n;
	vector<string> binaries = generateBinary(n);
	for (int i = 0; i < binaries.size(); i++) {
		cout << binaries[i] << endl;
	}
	return 0;
}

// vim:foldlevel=2
