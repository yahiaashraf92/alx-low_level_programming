#include "main.h"
/**
 * print_rev - returns the length of a string
 * @s: string
 * Return: the length of the string passed as input
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
