/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_more_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:59:23 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/18 18:07:29 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	asignindex(t_stack *s)
{
	t_stack	*aux;
	int		index;

	aux = s;
	index = 1;
	while (s != NULL)
	{
		s->index = index;
		index++;
		s = s->next;
	}
	s = aux;
}
