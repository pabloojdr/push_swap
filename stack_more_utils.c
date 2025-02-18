/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_more_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabloojdr <pabloojdr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:59:23 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/18 22:51:09 by pabloojdr        ###   ########.fr       */
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
