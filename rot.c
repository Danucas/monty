#include "monty.h"
/**
 *rotl - check the code for Holberton School students.
 *@st: stack to be freed
 *@line_number: line number
 * Return: Always 0.
 */
void rotl(stack_t **st, unsigned int line_number)
{
	stack_t *next = *st, *top = *st;

	while (next)
	{
		if (!next->next)
		{
			*st = top->next;
			if (top->next)
				top->next->prev = NULL;
			top->next = NULL;
			top->prev = next;
			next->next = top;
			break;
		}
		next = next->next;
	}
	(void) line_number;
}
/**
 *rotr - check the code for Holberton School students.
 *@st: stack to be freed
 *@line_number: line number
 * Return: Always 0.
 */
void rotr(stack_t **st, unsigned int line_number)
{
	stack_t *next = *st;

	while (next)
	{
		next = (*st)->next;
		free(*st);
		*st = next;
	}
	(void) line_number;
}
