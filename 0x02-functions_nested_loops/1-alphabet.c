#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int n;

	for (n = 'a';n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
