#include "main.h"
/**
 * more_numbers - printt
 * return : void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 48; i < 63; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
