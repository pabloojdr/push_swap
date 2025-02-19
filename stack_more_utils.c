/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_more_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:59:23 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/19 17:58:17 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	asignindex(t_stack *s)
{
	t_stack	*aux;
	t_stack	*aux2;
	int		index;

	aux = s;
	while (aux != NULL)
	{
		index = 1;
		aux2 = s;
		while (aux2 != NULL)
		{
			if (aux2->value < aux->value)
				index++;
			aux2 = aux2->next;
		}
		aux->index = index;
		aux = aux->next;
	}
}

void	asignposition(t_stack *s)
{
	t_stack	*aux;
	int		position;

	position = 0;
	aux = s;
	while (aux != NULL)
	{
		aux->pos = position;
		position++;
		aux = aux->next;
	}
}

void	asigntargetposition(t_stack **a, t_stack **b)
{
	t_stack	*auxa;
	t_stack	*auxb;

	auxb = *b;
	while (auxb != NULL)
	{
		auxa = *a;
		while (auxa != NULL)
		{
			if (auxb->index + 1 == auxa->index)
				auxb->target_pos = auxa->pos;
			else if (auxb->index == stacksize(*a) + stacksize(*b))
				auxb->target_pos = getpositionbyindex(getlowestindex(a), a);
			auxa = auxa->next;
		}
		auxb = auxb->next;
	}
}

int	getlowestindex(t_stack **a)
{
	t_stack	*aux;
	int		index;

	aux = *a;
	index = stacksize(*a);
	while (aux != NULL)
	{
		if (aux->index < index)
			index = aux->index;
		aux = aux->next;
	}
	return (index);
}

int	getpositionbyindex(int index, t_stack **a)
{
	t_stack	*aux;

	aux = *a;
	while (aux != NULL)
	{
		if (aux->index == index)
			return (aux->pos);
		aux = aux->next;
	}
	return (-1);
}
