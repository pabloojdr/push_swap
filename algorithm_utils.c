/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 23:06:39 by pabloojdr         #+#    #+#             */
/*   Updated: 2025/02/19 17:58:27 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choosealg(t_stack **a, t_stack **b)
{
	if (stacksize(*a) == 2)
		algtwo(a);
	else if (stacksize(*a) == 3)
		algthree(a);
	else
		algps(a, b);
}

void	algtwo(t_stack **s)
{
	if ((*s)->index > (*s)->next->index)
		sa(s);
}

void	algthree(t_stack **s)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = *s;
	second = first->next;
	third = second->next;
	if (first->index > second->index && first->index > third->index)
	{
		ra(s);
		algthree(s);
	}
	else if (second->index > first->index && second->index > third->index)
	{
		rra(s);
		algthree(s);
	}
	else if (first->index > second->index)
	{
		sa(s);
		algthree(s);
	}
}

void	algps(t_stack **a, t_stack **b)
{
	int	midindex;
	int	i;

	midindex = stacksize(*a) / 2;
	i = 0;
	while (stacksize(*a) > 3 && *a != NULL)
	{
		if ((*a)->index < midindex)
			pb(a, b);
		else if (i >= stacksize(*a))
			pb(a, b);
		else
			ra(a);
		i++;
	}
	algthree(a);
	asignposition(*a);
	asigntargetposition(a, b);
	printstack(a);
	printstack(b);
}
