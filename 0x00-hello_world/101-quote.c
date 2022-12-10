#include<stdio.h>
/**
 * main - sentences
 *
 * Return: Always 0
 */
int main(void)
{
	char c[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (c[i] != '\0')
	{
	putchar(c[i]);
	i++;
	}
	putchar('\n');
	return (1);
}
