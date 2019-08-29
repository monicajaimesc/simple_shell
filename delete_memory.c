#include "shell.h"
/**
 * delete_memory - delete memory in double pointer
 * @value: double pointer
 * @ptr: size free
 */
void delete_memory(char **ptr, int value)
{
	int i;

	for (i = 0; i < value; i++)
		free(ptr[i]);
	free(ptr);
}
