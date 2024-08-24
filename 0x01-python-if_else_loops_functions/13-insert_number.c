#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <unistd.h>
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
listint_t *insert_node(listint_t **head, int number)
{
  listint_t *current = *head;
  listint_t *new = NULL;
  listint_t *temp = NULL;

  if (!head)
    return (NULL);
  
  new = malloc(sizeof(listint_t));
  if (!new)
    return (NULL);

  new->n = number;
  new->next = NULL;

  if (!*head || (*head)->n > number)
    {
      new->next = *head;
      return (*head = new);
    }
  else
    {
      while (current && current ->n < number)
	{
	  temp = current;
	  current = current->next;

	}
      temp->next = new;
      new->next = current;
    }
  return (new);
}
