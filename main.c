#include "shell.h"

/**
 *main - programate that emulates the lifetime of a shell
 *Return: Integer result, 0 for sucess besides is an error
 */

/*simpleshell: analizar la linea de comando to build the argv data structure*/
/* 1.identifier:2.identifier:3.identifier]]*)*/
/* result 1:PATH=usr/bin/ls */
/* resutl 2: length array, argv*/

int main(void)
{
	char *buffer = NULL;
	char *getenviron;
	args_t args;
	path_t *head;

	getenviron = _getenv("PATH");
	head = create_node(getenviron);
/*Run process 2. command loop*/
	/*just the kernel process is running until no -system call yet*/
	/*Run command loop*/
	while (EOF)/*end of a file */
	{
		/* print prompt */
		/* int isatty(int fd) */
		if (isatty(STDIN_FILENO))
			write(1, "#cisfun-Lama6a~$ ", 10);
/*reads an entire line from stream, store it in bufsize and thext is stdin*/
		buffer = read_input();
/*getline was no succesfull, function failed*/
		if (buffer == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n", 1);
			break;
		}

		else
		{
/*1 identifier when we turn on pc*/
/*2 & 3. identifier, argv & argc*/
			args = break_line(buffer);
			execute(args.argv, head);
/*shutdown-cleanup*/
			delete_memory(args.argv, args.argc);
			free(buffer);
		}
	}

	free_list(head);
	return (0);
}
