#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10() - void parameters
 * Description: prints a message that depends on
 * last digit of the random number generated
 * Return: Always void Success
 */
void print_alphabet_x10(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
