#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - Entry point
 * @dest: pointer to a character input
 * @src: pointer to a character input
 * @n: input integer
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
