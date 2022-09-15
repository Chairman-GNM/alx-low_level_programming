#include "main.h"

/**
 * print_line - print a straight line
 * @n: is the number of times the _ character should be printed
 */

void print_line(int n)
{
	int lnchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; ++lnChr)
			_putchar('_');
	}
}
