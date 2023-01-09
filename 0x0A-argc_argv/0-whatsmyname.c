#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *main - entry point
  *@argc: integer input
  *@argv: array of string
  *Return: always 0
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
