#include <stdio.h>
/**
 * main - Display both alphabet in lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putcahr('\n');
	return (0);
}
