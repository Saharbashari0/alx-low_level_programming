#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 * Return: The numbers since 0 up to 9
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}

