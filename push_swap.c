/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:06:00 by pcampoy-          #+#    #+#             */
/*   Updated: 2025/02/18 17:31:49 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checknargs(char *argv)	// Se le pasa un array de chars y comprueba por cuantos números está formado el array
{
	int	i;
	int	b;
	int	n;

	i = 0;									// i es la posición en la que nos encontramos en el array
	b = 0;									// b funciona como un boolean que nos marcará cuando empieza un número, es decir, cuando ha habido un espacio
	n = 0;									// n es el número de caracteres que son digitos
	while (argv[i] != 0)					// Recorremos el array
	{
		if (ft_isdigit(argv[i]) == 1)		// Comprobamos si es un digito
		{
			if (b == 0)						// Si el booleano es 0 es que o bien acabamos de empezar a recorrer el array o bien previamente ha habido un espacio
			{
				n++;						// Contamos el nuevo número
				b = 1; 						// Marcamos que estamos viendo un número
			}
		}
		else if (argv[i] == ' ') 			// Comprobamos si el caracter es un espacio
		{
			b = 0;							// Si es un espacio, cambiamos el bool a falso para poder empezar a contar un número nuevo
		}
		i++;
	}
	return (n);								// Devolvemos el número de caracteres que son digitos
}

int	checkalchar(char **arg)	// Se le pasa un array de arrays y comprueba si está formado por números. Imprime un mensaje de error en caso contrario
{
	int	i; 														// Posicion de la fila
	int	j; 														// Posicion de la columna

	i = 0;
	while (arg[i] != 0) 										// Comenzamos a recorrer la fila
	{
		j = 0;
		while (arg[i][j] != 0) 									// Comenzamos a recorrer la columna
		{
			if (ft_isdigit(arg[i][j]) != 1 && arg[i][j] != ' '
				&& arg[i][j] != '+' && arg[i][j] != '-')		// Comprobamos que el elemento es un digito, un espacio, un más o un menos
			{
				ft_printf("Error: not numbers\n");				// En caso de no cumplirse, se imprima un mensaje avisando de que hay un elemento que no es un numero
				return (1);										// Devuelve 1 para indicar que el array contiene algún elemento que no es un digito
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	checkerr(char **arg)	// Esta función comprueba si en los argumentos existen números duplicados o números fuera del límite de Integer
{
	int	i;
	int	n;

	if (checkdup(arg) == 1)
	{
		ft_printf("Error: duplicated numbers\n");
		return (-1);
	}
	i = 0;
	while (arg[i] != 0)
	{
		n = ft_atoi(arg[i]);
		if (n >= 2147483647 || ft_atoi(arg[i]) <= -2147483648)
		{
			ft_printf("Error: invalid integer\n");
			return (-1);
		}
		i++;
	}
	return (0);
}

void	ft_free(char **s)		// Libera memoria
{
	int	pos;

	pos = 0;
	while (s[pos] != 0)
	{
		free(s[pos]);
		pos++;
	}
	free(s);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**arguments;

	a = NULL;
	b = NULL;
	arguments = check(argc, argv);
	initargs(&a, arguments);
	printstack(&a);
}
