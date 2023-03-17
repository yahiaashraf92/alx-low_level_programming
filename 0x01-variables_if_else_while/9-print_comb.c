#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/**
 *  main - Entry point
 *  Description: prints a message that depends on
 *  last digit of the random number generated
 *  Return: Always 0 Success
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('\n');

	return (0);
}
