#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry point
 * @c: input integer
 *
 * Return: Always 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
	return (0);
}
