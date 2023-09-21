#include "lists.h"

void _constructor(void) _attribute_ ((constructor));

/**
 * _costructor - executes before main()
 *
 * Return: void
 */
void _constructor(void)
{
	printf("you're beat! and yet, you must allow, \n"
			"I bore my house upon my back!\n");
}
