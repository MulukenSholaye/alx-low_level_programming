#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * check_num - check num
 * @x : first num
 * @y : sec num
 *accept ints and return multiplication
 *argv: argument vector.
 *
 * Return: no return.
 */

int check_num(int x, int y)
{
	int a = isdigit(x);
	int b = isdigit(y);

	if (a == 0 && b == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * mul - determines
 * @x : firstnum
 * @y : sec num
 * Return: no return.
 **/

int mul(int x, int y)
{
	return (x * y);
}

/**
 * main - is_mul-determines
 * @argc : num of args
 * @argv : argument vector
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	a = check_num(atoi(argv[1]), atoi(argv[2]));
	if (a == 0)
	{
		b = mul(atoi(argv[1]), atoi(argv[2]));
		printf("%d\n", b);
	}
	return (0);
}
