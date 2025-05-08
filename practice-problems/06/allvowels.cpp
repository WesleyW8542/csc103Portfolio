/* TODO: Write a function that takes a string parameter, and returns a boolean
 * value indicating whether or not *all* vowels (a,e,i,o,u) are present
 * somewhere in the string.  For example, if the input is "hello world", the
 * return value should be false, and on input "programming is super fun!" the
 * return value should be true.
 * NOTE: to simplify things, you can assume the input string is all lower case.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */
bool allvowels(string s)
{
	bool hasA = false, hasE = false, hasI = false, hasO = false, hasU = false;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'a')
		{
			hasA = true;
		}
		else if(s[i] == 'e')
		{
			hasE = true;
		}
		else if(s[i] == 'i')
		{
			hasI = true;
		}
		else if(s[i] == 'o')
		{
			hasO = true;
		}
		else if(s[i] == 'u')
		{
			hasU = true;
		}
	}		
	return hasA && hasE && hasI && hasO && hasU;	
}
int main()
{
	/* TODO: call your function, make sure it works... */
	cout << "hello world: ";
    if (allvowels("hello world")) cout << "true" << endl;
    else cout << "false" << endl;

    cout << "programming is super fun!: ";
    if (allvowels("programming is super fun!")) cout << "true" << endl;
    else cout << "false" << endl;
	return 0;
}

// vim:foldlevel=2
