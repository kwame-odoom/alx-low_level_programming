#include <stdio.h>

/**
 * main - Prints the alphabet.
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabets_mixed[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabets_mixed[i]);
	}
	putchar('\n');
	return (0);

}
