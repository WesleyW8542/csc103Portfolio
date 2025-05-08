/* TODO: write a function which takes a string and returns a boolean indicating
 * whether or not the string was a palindrome.  (Palindromes are strings that
 * do not change when reversed). */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */
bool isPalindrome(string s)
{
	for (int i = 0; i < s.size() / 2; i++) 
	{
        if (s[i] != s[s.size() - 1 - i]) 
		{
            return false;
        }
    }
    return true;
}
int main()
{
	/* TODO: call your function, make sure it works... */
	string test1 = "racecar";
    string test2 = "hello";
    string test3 = "madam";

    if (isPalindrome(test1)) 
    {
        cout << test1 << ": true" << endl;
    } else 
    {
        cout << test1 << ": false" << endl;
    }

    if (isPalindrome(test2))
    {
        cout << test2 << ": true" << endl;
    } 
    else 
    {
        cout << test2 << ": false" << endl;
    }

    if (isPalindrome(test3)) 
    {
        cout << test3 << ": true" << endl;
    } 
    else 
    {
        cout << test3 << ": false" << endl;
    }

    return 0;
}

// vim:foldlevel=2
