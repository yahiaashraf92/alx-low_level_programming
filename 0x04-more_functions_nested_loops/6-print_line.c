#include "main.h"
/**
 * print_line - printt
 * return : void
 * @n : number
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('$');
	_putchar('\n');

}
