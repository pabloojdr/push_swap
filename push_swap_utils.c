/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:36:47 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/21 18:39:58 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkdup(char **arg)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (arg[i] != 0)
	{
		j = i + 1;
		aux = ft_atoi(arg[i]);
		while (arg[j] != 0)
		{
			if (aux == ft_atoi(arg[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	**check(int argc, char *argv[])
{
	int		allocated;
	char	**arguments;

	allocated = 0;
	arguments = NULL;
	if (argc <= 1 || (argc == 2 && checknargs(argv[1]) <= 1) 	// Comprobamos los casos en los que no se pasan argumentos, se pasan argumentos y ninguno es un número, y
		|| checkalchar(&argv[1]))
		exit(1);												// Sale del programa y devuelve el control sin hacer nada
	if (argc == 2 && checknargs(argv[1]) > 1)
	{
		arguments = ft_split(argv[1], ' ');						// Devuelve un array de arrays que contiene a los números por separado como chars
		allocated = 1;
	}															// Comprobamos que lo pasan como cadena y que la cadena contiene más de un numero
	else if (argc > 2)											// Si el número de argumentos pasados es más de dos, los numeros no vienen como cadena y se asignan directamente
		arguments = &argv[1];
	if (checkerr(arguments) == -1)
	{
		if (allocated == 1)
			ft_free(arguments);
		exit(1);
	}
	return (arguments);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
