#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - executes a function given on each element on an array
 * @array: array to execute the function on each element of
 * @size: size of the array
 * @cmp: function to execute on each element of the array
 * Return: void ALWAYS
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
	int i = 0;

	if (!array || size == 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])
			return (i);
	}
	return (-1);
}
