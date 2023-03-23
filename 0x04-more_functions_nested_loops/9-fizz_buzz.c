#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include "main.h"
/**
 * fizz_buzz - print
 * return : void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
/**
 * main - Entry point
 * Description: prints a message that depends on
 * last digit of the random numbier generated
 * Return: Always 0 Success
 */
int main(void)
{
	fizz_buzz();

	return (0);
}
