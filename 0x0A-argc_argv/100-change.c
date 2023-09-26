#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the minimum num of coins to make change for an amount of money
 * @argc: the num of arg supplied to the program
 * @argv: an array of pointer to the argument
 *
 * @Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int num, j, result;
int coins[] = {25, 10, 5, 2, 1};
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
if (num < 0)
{
	printf("0\n");
		return (0);
}
for (i = 0; j < 5 && num >= 0; j++)
{
	while (num >= coins[j])
	{
		result++;
		num -= coins[j];
	}
}
printf("%d\n", result);
return (0);
}