#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Functions to check alpha chars
 * @c: Input inetger
 * Return: Always success (0)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
