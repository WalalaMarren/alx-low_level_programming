#include "main.h"
/**
 * print_sign - Entry point
 * @n: Input integer
 *
 * Return: Always o
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('1');
	}
	if (n == 0)
	{
		_putchar("0");
		_putchar(',');
		_putchar(' ');
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar("/");
	}
	return (0);
}
