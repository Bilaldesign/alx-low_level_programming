#include "main.h"

/**
 * _strem - return the length of a string
 * @s: string
 * return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++
	}

	return (len);
}
