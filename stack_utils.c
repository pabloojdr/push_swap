/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 20:17:14 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/18 17:45:45 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*initstack(int content)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->value = content;
	stack->next = NULL;
	return (stack);
}

void	addstack(t_stack **st, t_stack *new)
{
	t_stack	*aux;

	if (*st == NULL)
		*st = new;
	else
	{
		aux = *st;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
}

void	initargs(t_stack **s, char **args)
{
	int	i;
	int	n;

	i = 0;
	while (args[i] != 0)
	{
		n = ft_atoi(args[i]);
		addstack(s, initstack(n));
		i++;
	}
}

void	printstack(t_stack **s)
{
	t_stack	*aux;

	aux = *s;
	while (aux != NULL)
	{
		ft_printf("%i ", aux->value);
		aux = aux->next;
	}
	ft_printf("\n");
}
