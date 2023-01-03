#include "main.h"

/**
 *_memset - Entry point to the function memset
 *@s:pointer to a memory location
 *@b:input string
 *@n:size of the memory location
 *Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
