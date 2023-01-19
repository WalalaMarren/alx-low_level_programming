#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - entry point
 * @name: name to be printed
 * @f: pointer to function that prints name
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
