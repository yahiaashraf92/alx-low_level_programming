#include"main.h"
/**
 * jack_bauer - prints last digit of a number
 * Description: Performs a mathmatical operation
 * to extract the last digit of a number passed
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h + '0');
			_putchar(':');
			_putchar(m + '0');
			_putchar('\n');
		}
	}
}
