#include "main.h"
#include <string.h>

/**
 *_memcpy - entry point
 *@src: destination to copied char
 *@dest: destination to copied char
 *@n: Nmner of chars to be copied
 *Return: Always 0
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *(src + i);
	}
	return (dest);
}
