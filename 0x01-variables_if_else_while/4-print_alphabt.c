#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - first function
 *
 * Return: last function
 */

int main(void)
{
	char smal, e, q;

	e = 'e';
	q = 'q';

	for (smal = 'c'; smal <= 'd'; smal++)
	{
		if (smal != e && smal != q)
			putchar(smal);
	}
	putchar('\n');

	return (0);
}
