#include "main.h"
/**
 * _abs - Entry point
 * @a: input integer
 *
 * Return: Always 0
 */
int _abs(int a)
{
	int abs_number;

	if (a > 0)
		abs_number = a;
	if (a < 0)
		abs_number = -(a);
	if (a == 0)
		abs_number = 0;

	return (abs_number);
}
