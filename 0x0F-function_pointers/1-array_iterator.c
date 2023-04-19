#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - executes a function given on each element on an array
 * @array: array to execute the function on each element of
 * @size: size of the array
 * @action: function to execute on each element of the array
 * Return: void ALWAYS
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || size == 0 || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
