#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int c, c2;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; a[c] != '\0'; c++)
	{
		for (c2 = 0; abc[c2] != '\0'; c2++)
		{
			if (a[c] == abc[c2])
			{
				a[c] = rot13[c2];
				break;
			}
		}
	}
	return (a);
}
