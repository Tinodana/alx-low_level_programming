#include "main.h"

/**
 * _memset - entry point
 * @n: bytes
 * @b: constant byte
 * @s: pointed destinationd
 * Return: always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
