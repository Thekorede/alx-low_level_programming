#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{

size_t count = 0;

printf("[");

while (h != NULL)
{
if (h->str == NULL)
{
printf("(nil)");
} 
else
{
printf("%s", h->str);
}

count++;

if (h->next != NULL)
{
printf(", ");
}

h = h->next;
}

printf("]\n");

return count;
}
