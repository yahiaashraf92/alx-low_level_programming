#include <stdlib.h>
#include <time.h>
#include<stdio.h>
#include "main.h"

/**
 * _islower - void parameters
 * Description: prints a message that depends on
 * last digit of the random number generated
 * @c : check c
 * Return: int always
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
