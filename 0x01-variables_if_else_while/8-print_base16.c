#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - First Function
 *
 * Return: Last function
 */

int main(void)
{
	int x;
	char smal;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (smal = 'a'; smal <= 'f'; smal++)
		putchar(smal);
	putchar('\n');

	return (0);
}
