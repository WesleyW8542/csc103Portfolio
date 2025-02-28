/* function to swap contents of two variables: if you call swap(x,y),
 * then afterwards, y will have x's value and vice versa. */
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}
