#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *main - entry point
  *@argc: input integer
  *@argv: array of string
  *Return: always 0
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
