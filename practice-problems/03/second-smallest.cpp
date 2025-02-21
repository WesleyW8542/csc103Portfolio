/* TODO: write a small program that will read integers from standard input (cin)
 * and print the *second smallest* integer to standard output (cout).
 * NOTE: this might be a little challenging.  Be sure to work out your process
 * clearly on paper (say using the post-it note model) before trying to write
 * any code. */
#include <iostream>
#include <climits>
using std::cin;
using std::cout;

int main()
{
	int input = 0;
	int smallest = INT_MAX, biggest = INT_MAX, target = 0;
	while(cin >> input)
	{	
		if(input > biggest)
		{
			if(biggest > target)
			{
				biggest = input;
			}
			else 
			{
				target = biggest;
				biggest = input;
			}
		}
		else if(input < smallest)
		{
			target = smallest;
			smallest = input;
		}
		else 
		{
			target = input;
		}
	}
	cout << "The second smallest integer is " << target << '\n';
}

// vim:foldlevel=2
