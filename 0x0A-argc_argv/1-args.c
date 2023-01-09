#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  *main - entry point
  *@argc: input integer
  *@argv: an array of string
  *Return: Always 0
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
