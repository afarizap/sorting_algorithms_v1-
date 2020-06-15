#include "sort.h"

/*You must use the following sequence of intervals (a.k.a the Knuth sequence)*/
/*
 *    n+1  = n * 3 + 1
 *    1, 4, 13, 40, 121, ...
*/

void swap(int *array, int dest, int origin);
/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
void shell_sort(int *array, size_t size)
{
	int gap = 1, i = 0, j = 0;
	/*Found the gap*/
	if (size < 2 || array == NULL)
		return;

	while ((gap * 3 + 1) < (int) size)
		gap = (gap * 3 + 1);

	while (gap >= 1)
	{
		j = (size - 1) - gap, i = size - 1;
		while (j >= 0)
		{
			if (array[i] < array[j])
				swap(array, i, j);
			j--, i--;
		}
		gap = (gap - 1) /3;
		if ()
	}
}

void swap(int *array, int dest, int origin)
{
	if (array[dest] != array[origin])
	{
		array[dest] = array[dest] ^ array[origin];
		array[origin] = array[dest] ^ array[origin];
		array[dest] = array[dest] ^ array[origin];
	}
}
