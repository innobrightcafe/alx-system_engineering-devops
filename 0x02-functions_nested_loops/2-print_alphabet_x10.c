#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 X the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char alphabet, co;

	co = 0;

	while (co < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar (alphabet);
		}
		co++;
		_putchar('\n');
	}
}
