#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: prints a message that depends on
 * last digit of the random numbier generated
 * Return: Always 0 Success
 */
int main(void)
{
	int a, b, c, d;

	int cnt = 0;

	int n1, n2;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					n1 = b + 10 * a;
					n2 = d + 10 * c;
					if (n1 < n2)
					{
					if (cnt++)
					{
					putchar(',');
					putchar(' ');
					}
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
