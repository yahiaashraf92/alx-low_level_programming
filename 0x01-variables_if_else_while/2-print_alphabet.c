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
	int i = 97;

	for (; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
