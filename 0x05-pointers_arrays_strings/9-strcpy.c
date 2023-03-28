#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination array
 * @src: source string
 * Return: pointer to destination array
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
