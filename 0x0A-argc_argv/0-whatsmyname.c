#include <stdio.h>

/**
 * main - prints file name
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: a program that prints its name
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);

