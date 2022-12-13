#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Functions to check alpha chars
 * @c: Input inetger
 * Return: Always success (0)
 */
int _isalpha(int c)
{
	int j;
	int i;
	int val;
	val = 0;

	for (j = 97; j <= 122; j++)
	{
		for (i = 65; i <= 90; i++)
		{
			if (c == i || c == j)
			{
				val += 1;
			}
			else
			{
				val = 0;
			}
			return (val);
		}
	}
	return (0);
}
