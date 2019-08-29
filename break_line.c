#include "shell.h"
/**
 * break_line - Generate argv vector
 *@buf: Line to be splitted
 * Return: double pointer char
 */

args_t break_line(char *buf)
{
	args_t arguments;
	char **array;
	char *tmp;
	char *dlm = " \t\n";
	char *word;
	int i = 0;

	tmp = malloc((_strlen(buf) + 1) * sizeof(char));
/*copy from a string to another in the buffer*/
	tmp = _strcpy(tmp, buf);
/*char *strtok(char *str, const char *delim)*/
/*breaks string str into a series of word using the delimiter delim*/
	word = strtok(buf, dlm);
	while (word != NULL)
	{
		i++;
/*word(s) saved into word*/
		word = strtok(NULL, dlm);
/*returns a pointer to the first character of a token*/
	}
/*save space for array*/
	array = (char **) malloc((i + 1) * sizeof(char *));
	/*
	if (array == NULL)
	return (NULL);
	*/
/*split in word the string*/
	word = strtok(tmp, dlm);
	i = 0;
/*recorralo*/
	while (word != NULL)
	{
		array[i] = (char *) _calloc((_strlen(word) + 1), sizeof(char));
	/*calloc localiza cada espacio, malloc the whole bloque*/
		array[i] = _strcpy(array[i], word);
		i++;
		word = strtok(NULL, dlm);
	}
	array[i] = NULL;
	arguments.argc = i;
	arguments.argv = array;
	free(tmp);
	return (arguments);
}
