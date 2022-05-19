#include <string.h>
#include "lists.h"
/**
 * _strlen - returns the length of a string.
 * @s: character value.
 *
 *Return: x value
 */
int _strlen(const char *s)
{
int x;

for (x = 0; s[i] != 0; x++)
;
return (x);
}
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head:pointer so struct.
 * @str: string pointer.
 *
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n = (list_t *) malloc(sizeof(list_t));
list_t *e = *head;

if (n == NULL)
return (NULL);
n->str = strdup(str);
n->len = _strlen(str);
n->next = NULL;
if (*head == NULL)
(*head) = n;
else
{
while (e->next != NULL)
e = e->next;
}
if (e)
e->next = n;
return (n);
}
