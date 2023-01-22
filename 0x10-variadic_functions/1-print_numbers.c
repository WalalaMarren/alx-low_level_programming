#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - entry point
 * @n: number of arguments passed.
 * @separator: to be use in spacing
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
