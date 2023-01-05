#include "main.h"
/**
  *is_prime_number - entry point
  *@n: input integer
  *Return: always 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n % 1 == 0 && n % n == 0)
		return (1);
	else
		return (0);
}
