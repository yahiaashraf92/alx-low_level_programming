#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'prints a statement in the standard error.'
 *
 * Return: Always 1 (Error)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	rand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is positive", n);
	}
	return (0);
}
