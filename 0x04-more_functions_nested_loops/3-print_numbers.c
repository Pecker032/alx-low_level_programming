#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
