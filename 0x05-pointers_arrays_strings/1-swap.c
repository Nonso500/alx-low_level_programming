/**
 * swap_int- a function that swaps the values of two integers.
 * @a: values to be swapped
 * @b: values to be swapped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
