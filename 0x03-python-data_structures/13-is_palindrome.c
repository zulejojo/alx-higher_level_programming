#include "lists.h"
#include <stdio.h>

void reverse(listint_t **head);
int copare_lists(listint_t *head, listint *middle, int len);
/**
 * is_palindrome - checks if a singly linked list is a palidrome
 * @head: pointer to pointer of the frist mode in the list passed
 *
 *Return: 0 if  apalidrome isnt detected and 1 if yes
 */
int is_palindrome(listint_t **head);
{
  int len, i;
  listint_t *tmp;
  listint_t *middle;

  if (head == NULL || *head == NULL)
    return (1);
  tmp = *head;
  middle = *head;

  for (len = 0; tmp != NULL; len++)
    tmp = tmp->next;
  len =len /2;

  for (i=1; i <len; 1++)
    middle = middle->next;
  if (len %2 != 0 && len != 1)
    {
      middle = middle->next;
      len = len -1;
    }
  reverse(&middle);
  i = compare_list(*head, middle, len);
  return (i)
 }
