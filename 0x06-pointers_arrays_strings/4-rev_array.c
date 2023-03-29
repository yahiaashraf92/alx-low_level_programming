#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * reverse_array - returns the length of a string
 * @a: array
 * @n: string
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	int temp[n];

	for (i = 0; i < n; i++)
	{
		temp[i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = temp[n - i - 1];
	}

}
