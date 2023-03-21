#include"main.h"
/**
 * times_table - prints last digit of a number
 * Description: Performs a mathmatical operation
 * to extract the last digit of a number passed
 * Return: void
 */
void times_table(void)
{
	int i, t, v;

	for (i = 0; i < 10; i++)
	{
		for (t = 0; t < 10; t++)
		{
			v = i * t;
			if (i > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			printf("%d",v);
		}
		_putchar('\n');
	}

}
