#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct path_s - singly linked list of path
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node struct
 * for create path in linked list
 */
typedef struct path_s
{
	char *str;
	unsigned int len;
	struct path_s *next;
} path_t;
/**
 * struct args - arguments
 * @argc: numbers of argv
 * @argv: double pointer of strings
 *
 * Description: struct arguments
 */
typedef struct args
{
	int argc;
	char **argv;
} args_t;

extern char **environ;

int _strlen(char *str);
int _strcmp(char *s1, char *s2);
int execute(char **argv, path_t *path);

char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);

char *_getenv(const char *name);
char *read_input(void);

void free_list(path_t *head);
void delete_memory(char **table, int value);
void *_calloc(unsigned int nmemb, unsigned int size);

args_t break_line(char *buf);

path_t *add_node(path_t **head, char *str);
path_t *create_node(char *data);

size_t node_len(const path_t *h);

#endif
