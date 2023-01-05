#include "main.h"
/**
  *_strlen_recursion - entry point
  *@s: pointer to a string address
  *Return: Always 0
  */
int _strlen_recursion(char *s)
{
	int len, i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len = len + _strlen_recursion(s[i]);
	}
	return (len);
}
