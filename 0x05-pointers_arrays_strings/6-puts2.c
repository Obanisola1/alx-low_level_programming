#include "main.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: input string
 * Return: no return
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
