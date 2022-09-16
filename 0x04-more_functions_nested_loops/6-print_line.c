#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int nl;

	for (nl = 0; nl < n; nl++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
