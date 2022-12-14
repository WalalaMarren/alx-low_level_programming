#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Functions to check alpha chars
 * @c: Input inetger
 * Return: Always success (0)
 */
int _isalpha(int c)
{
	int i;
	int j;

	for (i = 65; i <= 90; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			if (c == i || c == j)
				return (1);
			else
				return (0);
		}
	}
	return (0);
}
