#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (index = 0; n > 0; i++)
	{
		s[i] = b;
		n-= 1;
	}
	return (s);
}
