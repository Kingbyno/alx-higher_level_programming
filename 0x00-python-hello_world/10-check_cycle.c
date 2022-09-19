#include "lists.h"

/**
 * check_cycle - function checks if a singly linked list has a cycle in it.
 * @list: pointer to the beginning of the node
 * Return: 0 if no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *first, *second = lists;
	
	if (!lists)
	return (0);
	
	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		return (1);
	}
	
	return (0);
}
