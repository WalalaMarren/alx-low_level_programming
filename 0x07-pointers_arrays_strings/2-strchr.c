#include "main.h"
#include <stddef.h>
/**
  *_strchr - entry point
  *@s:input string
  *@c: Input character
  *Return: Always 0
  */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
