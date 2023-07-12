#include "main.h"
#include <stdlib.h>
/**
 * create_array - create c
 * @size: size of c
 * @c: char value
 * Description: create array of size and assign c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		string[i] = c;
	return (string);
}
