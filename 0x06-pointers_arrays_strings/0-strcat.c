#include <stdio.h>
#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to append to
* @src: string to add
*
* Return: a pointer to the resulting string
*/

char *_strcat(char *dest, const char *src)
{
char *originalDest = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (originalDest);
}

