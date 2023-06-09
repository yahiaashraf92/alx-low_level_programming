#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include "main.h"
/**
 * print_number - print
 * return : void
 * @n : num
 */

void print_number(int n)
{
	int i, c;

	c = 10;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 10 && n > -10)
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		_putchar(n + '0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n > 0 && n > 9)
	{
		while (c < n / 10)
		{
			c *= 10;
		}
		while (c > 0)
		{
			i = (n / c) % 10;
			_putchar(i + '0');
			c = c / 10;
		}
	}
}
