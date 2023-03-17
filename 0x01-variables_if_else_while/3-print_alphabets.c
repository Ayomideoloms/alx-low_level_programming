#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - First function
 *
 * Return: Last Function
 */

int main(void)
{
	char smal;

	for (smal = 'a'; smal <= 'z'; smal++)
		putchar(smal);
	for (smal = 'A'; smal <= 'Z'; smal++)
		putchar(smal);
	putchar('\n');

	return (0);
}
