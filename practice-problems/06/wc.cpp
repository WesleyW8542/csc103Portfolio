/* TODO: write a function that takes a string and counts the words in
 * the string.  You can assume words are only delimited by whitespace
 * characters: ' ', '\t', '\n'.  NOTE: counting spaces does not suffice!
 * Your function should report 2 words for "hello world" or " hello world"
 * or "  hello     world   ". */
/* TODO: (Bonus question) Write another version of the above function which
 * instead of just returning the count of the words, returns a vector of
 * all the words read.  */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

/* your answer goes here... */
int countWords(const string &s) 
{
    bool inWord;
    int count = 0;

	for (int i = 0; i < s.length(); i++) 
	{
		char c = s[i];
		if (c == ' ' || c == '\t' || c == '\n') 
		{
			inWord = false;
		} 
		else if (!inWord) 
		{
			count++;
			inWord = true;
		}
	}

    return count;
}

int main()
{
	/* TODO: call your function, make sure it works... */
	string input = "hello world";

    int count = countWords(input);

    cout << count << '\n';
	return 0;
}

// vim:foldlevel=2
