#include<stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and intializes it with a char
 * @size: size of array
 * @c: used to intialize array
 * Return: NULL if size = 0, pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	buffer = (char *)malloc(size * sizeof(char));


	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		return (buffer);
	}
}
