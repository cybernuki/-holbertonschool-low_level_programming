/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: is the size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;
	for (i = 0; i < n; i++, --n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
	}
}
