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
	int i, j, temp;

	j = n - 1;

	for(i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}

}
