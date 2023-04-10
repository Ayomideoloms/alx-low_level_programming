#include "main.h"
#include <stdio.h>

/**
  * main - The first function
  * @argc: Total argument count
  * @argv: Total argument vector
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}

