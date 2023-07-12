#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @string: char
 * Return: 0
 */
char *_strdup(char *string)
{
	char *a;
	int i, r = 0;

	if (string == NULL)
		return (NULL);
	i = 0;
	while (string[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (r = 0; string[r]; r++)
		a[r] = string[r];

	return (a);
}
