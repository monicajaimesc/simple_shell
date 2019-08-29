#include "shell.h"
/**
 * split_line - Generate argv vector
 *@buf: Line to be splitted
 * Return: double pointer char
 */

args_t break_line(char *buf)
{
	args_t arguments;
	char **array;
	char *tmp;
	char *dlm = " \t\n";
	char *tkn;
	int i = 0;

	tmp = malloc((_strlen(buf) + 1) * sizeof(char));
	tmp = _strcpy(tmp, buf);
	tkn = strtok(buf, dlm);
	while (tkn != NULL)
	{
		i++;
		tkn = strtok(NULL, dlm);
	}
	array = (char **) malloc((i + 1) * sizeof(char *));
	/*
	* if (argv == NULL)
	* return (NULL);
	*/
	tkn = strtok(tmp, dlm);
	i = 0;
	while (tkn != NULL)
	{
		array[i] = (char *) _calloc((_strlen(tkn) + 1), sizeof(char));
		array[i] = _strcpy(array[i], tkn);
		i++;
		tkn = strtok(NULL, dlm);
	}
	array[i] = NULL;
	arguments.argc = i;
	arguments.argv = array;
	free(tmp);
	return (arguments);
}
