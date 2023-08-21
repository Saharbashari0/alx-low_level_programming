#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: noting
 */

void swap_int(int *a, int *b)
	/* the function that swap the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
