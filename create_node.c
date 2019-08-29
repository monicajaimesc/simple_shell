#include "shell.h"

/**
 * free_list - free list
 * @head: head node list
 */
void free_list(path_t *head)
{
	path_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
/**
 * node_len - length list
 * @h: list path
 * Return: integer length
 */
size_t node_len(const path_t *h)
{
	size_t count = 0;

	while (h)
		h = h->next, count++;
	return (count);
}
/**
 * *add_node - add node in list
 * @head: head
 * @str: string
 * Return: List_t
 */
path_t *add_node(path_t **head, char *str)
{
	path_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(path_t));
	if (new == NULL)
		return (NULL);
	new->str = malloc((_strlen(str) + 2) * sizeof(char));
	if (new->str == NULL)
		return (NULL);
	new->str = _strcpy(new->str, str);
	new->str = _strcat(new->str, "/");
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
/**
 * *create_node - create a node
 * @data: data from create
 * @separator: delimiter inside data
 * Return: new node
 */
path_t *create_node(char *data)
{
	path_t *new;
	char *token;

	new = NULL;
	token = strtok(data, ":");
	while (token)
		add_node(&new, token), token = strtok(NULL, ":");

	return (new);
}
