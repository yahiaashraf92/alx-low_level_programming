#include "main.h"
/**
 * print_line - prints line
 * Return: void
 * @n: number of lines
 */

void print_line(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}

	_putchar('\n');
}
