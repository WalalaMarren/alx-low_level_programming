#include "main.h"
/**
 * _isupper - Entry point
 * @c: input integer
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
