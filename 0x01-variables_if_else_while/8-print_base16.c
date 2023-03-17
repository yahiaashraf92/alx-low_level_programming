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

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 'a';i <= 'f';i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
