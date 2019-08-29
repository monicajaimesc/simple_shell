#include "shell.h"

/**
 * *read_input - read line for stdin
 * Return: Success or Fail
 */
char *read_input(void)
{
	char *buffer = NULL;
	int chars;
	size_t sizebuffer = 0;

	fflush(stdin);
	chars = getline(&buffer, &sizebuffer, stdin);
	if (chars == -1)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}
