#include "main.h"
/**
 * _islower - checks for lower case
 * @c: character integer
 *
 * Return: 1 on success otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
