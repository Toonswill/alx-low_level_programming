#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 *Return: return lenth of a string
 * @s : the string to be calculated the length of
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}
