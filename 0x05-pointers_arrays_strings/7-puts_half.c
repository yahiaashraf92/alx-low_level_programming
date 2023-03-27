#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * puts_half - returns the length of a string
 * @str: string
 * Return: the length of the string passed as input
 */
void puts_half(char *str)
{
	int j, i, k;

	for (i = 0; str[i] != '\0'; i++)
	{}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
	}

	for (k = j; k < i; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');


}
