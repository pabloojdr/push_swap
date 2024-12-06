/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:06:00 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/12/06 18:46:58 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checknargs(char *argv)
{
	int	i;
	int	b;
	int	n;

	i = 0;
	b = 0;
	n = 0;
	while (argv[i] != 0)
	{
		if (ft_isdigit(argv[i]) == 1)
		{
			if (b == 0)
			{
				n++;
				b = 1;
			}
		}
		else if (argv[i] == ' ')
		{
			b = 0;
		}
		i++;
	}
	return (n);
}

int	checkalchar(char **arg)
{
	int	i;
	int	j;

	i = 0;
	while (arg[i] != 0)
	{
		j = 0;
		while (arg[i][j] != 0)
		{
			if (ft_isdigit(arg[i][j]) != 1 && arg[i][j] != ' '
				&& arg[i][j] != '+' && arg[i][j] != '-')
			{
				ft_printf("Error: not numbers");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	checkerr(char **arg)
{
	int	i;
	int	n;

	if (checkdup(arg) == 1)
	{
		ft_printf("Error: duplicated numbers");
		return (-1);
	}
	i = 0;
	while (arg[i] != 0)
	{
		n = ft_atoi(arg[i]);
		if (n >= 2147483647 || ft_atoi(arg[i]) <= -2147483648)
		{
			ft_printf("Error: invalid integer");
			return (-1);
		}
	}
	return (0);
}

void	ft_free(char **s)
{
	int	pos;

	pos = 0;
	while (s[pos] != 0)
		free(s[pos++]);
	free(s);
}

int	main(int argc, char *argv[])
{
	char	**arguments;
	int		e;
	t_stack	*a;

	if (argc <= 1 || (argc == 2 && checknargs(argv[1]) <= 1)
		|| checkalchar(&argv[1]))
		exit(1);
	if (argc == 2 && checknargs(argv[1]) > 1) // Comprobamos que lo pasan como cadena y que la cadena contiene más de un numero
		arguments = ft_split(argv[1], ' ');
	else if (argc > 2)
		arguments = &argv[1];
	if (checkerr(arguments) == -1)
	{
		ft_free(arguments);
		exit(1);
	}
	initargs(&
	a, arguments);
}
