#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index- searches for an integer.
 * @array: array of integers.
 * @size: size of array.
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element for
 *	which the @cmp function does not return 0,
 *	-1 if no element match,
 *	-1 if @size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
