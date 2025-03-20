// #define _GLIBCXX_DEBUG 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string s,t;
	s = "hello";
	t = " world";
	cout << s + t << "\n";
	s += t;
	cout << s << "\n";
	/* searching in strings: */
	cout << "searching for 'll' in " << s << "\n";
	cout << s.find("ll") << "\n";
	cout << "searching for 'asdf' in " << s << "\n";
	cout << s.find("asdf") << "\n";
}

// vim:foldlevel=2
