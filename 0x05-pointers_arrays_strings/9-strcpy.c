#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed by scr
 * @dest: copy to
 * @scr: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *scr)
{
	int l = 0;
	int x = 0;

	while (*(scr + 1) != '\0')
	{
		l++;
	}
	for (; x < l ; x++)
	{
		dest[x] = scr[x];
	}
	dest[l] = '\0';
	return (dest);
}
