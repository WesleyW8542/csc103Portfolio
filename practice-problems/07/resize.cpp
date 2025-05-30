/* TODO: write a function to resize a dynamically allocated array.
 * Prototype is given below.  Remember: the basic steps are as follows:
 * 1. Allocate a new chunk of memory of the desired size.
 * 2. Copy elements from the old array to the new one.
 * 3. Free the old one (delete).
 * 4. Redirect the pointer to the new array.
 * NOTE: your function should work even if newsize < oldsize.
 * */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* your answer goes here... */
void resize(int*& A, size_t oldsize, size_t newsize)
{
	int* newArr = new int[newsize];
    for (size_t i = 0; i < newsize && i < oldsize; ++i) {
        newArr[i] = A[i];
    }
    delete[] A;
    A = newArr;
}

int main()
{
	/* TODO: use your resize function to read an arbitrary number of integers
	 * from stdin.  Each time you run out of space, double the array size. */
	size_t capacity = 2;
    size_t size = 0;
    int* arr = new int[capacity];
    int input;

    while (cin >> input) {
        if (size == capacity) {
            resize(arr, capacity, capacity * 2);
            capacity *= 2;
        }
        arr[size++] = input;
    }

    cout << "You entered:\n";
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}

// vim:foldlevel=2
