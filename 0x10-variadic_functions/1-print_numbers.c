#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - all the given numbers will be printed.
 * @separator: define character to separate the numbers
 * @n: nbr of numbers to be printed in the screen.
 * Return: a string with numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(arguments, int));
		if (i < n && separator)
			printf("%s", separator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(arguments);
}
