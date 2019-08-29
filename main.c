#include "shell.h"

/**
 * main - create shell
 *
 * Return: Success or Fail
 */

int main(void)
{
	char *buffer = NULL;
	char *getenviron;
	args_t args;
	path_t *head;

	getenviron = _getenv("PATH");
	head = create_node(getenviron);

	while (EOF)
	{
		/* print prompt */
		/* if (isatty(fileno(stdin))) */
		if (isatty(STDIN_FILENO))
			write(1, "#cisfun$ ", 10);
		buffer = read_input();
		if (buffer == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n", 1);
			break;
		}

		else
		{
			args = break_line(buffer);
			execute(args.argv, head);
			delete_memory(args.argv, args.argc);
			free(buffer);
		}
	}

	free_list(head);
	return (0);
}
