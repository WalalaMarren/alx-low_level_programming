#include "main.h"
#include <stdlib.h>
/**
  *create_array - entry point
  *@size: input integer
  *@c: character input
  *Return: Always 0
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(*str) * size);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
