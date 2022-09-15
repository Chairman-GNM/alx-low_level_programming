#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 * can only use _putchar three times
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
			{
				_putchar(y + '0');
			}
		_putchar('\n')
	}
}
