#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: prints a message that depends on
 * last digit of the random number generated
 * Return: Always 0 Success
 */
int main(void)
{
	int a, b, c;

	int cnt = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a < b)
				{
					if (b < c)
					{
						if (cnt++)
						{
							putchar(',');
							putchar(' ');
						}
						putchar(a + '0');
						putchar(b + '0');
						putchar(c + '0');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
