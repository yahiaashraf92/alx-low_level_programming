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
	int a, b;

	int num, rnum;

	int cnt = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			num = a * 10 + b;
			rnum = b * 10 + a;
			if (num < rnum)
			{
				if (cnt++)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a + '0');
				putchar(b + '0');
			}
		}
	}
	putchar('\n');

	return (0);
}
