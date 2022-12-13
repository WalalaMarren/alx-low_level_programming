#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lower case
 * @c: character integer
 *
 * Return: 1 on success otherwise 0
 */
int _islower(int c)
{
	char ch;
	int val = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			val+=1;
		}
	}
	return val;
}
