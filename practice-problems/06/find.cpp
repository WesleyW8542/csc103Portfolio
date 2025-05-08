/* TODO: write your own version of the "find" function, which takes two
 * strings, and searches for the second one in the first.  If a match is
 * found, you should return the index where the match begins in the first
 * string.  If no match is found, you can return the index -1 (which is
 * also known as string::npos). */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */
int find(const string &text, const string &pattern)
{
    if (pattern.length() == 0) 
	{
		return 0; 
	}

    for (size_t i = 0; i <= text.length() - pattern.length(); i++)
    {
        size_t j = 0;
        while (j < pattern.length() && text[i + j] == pattern[j])
        {
            j++;
        }
        if (j == pattern.length())
		{
            return i;
		}
    }
    return -1;
}
int main()
{
	/* TODO: call your function, make sure it works... */
	string text = "hello world";
    string pattern = "wor";

    int index = find(text, pattern);
    cout << index << '\n';
	return 0;
}

// vim:foldlevel=2
