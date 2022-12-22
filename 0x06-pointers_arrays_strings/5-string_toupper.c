#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *string_toupper - Entry point
 * @str: Indication of pointer
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int i;
	int str_len = strlen(str);

	for (i = 0; i <= str_len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
	printf("\n");
}
