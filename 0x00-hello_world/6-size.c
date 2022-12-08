#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success (0)
 */
int main(void)
{
	char c;
	int i;
	long int num;
	long long int val;
	float rem;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(num));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(val));
	printf("Size of a float: %zu byte(s)\n", sizeof(rem));
	return (0);
}
