/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:57:38 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/12/06 18:40:15 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

/// @brief 
/// @param argv 
/// @return 
int		ft_checknargs(char *argv);

/// @brief 
/// @param arg 
/// @return 
int		ft_checkalchar(char **arg);

/// @brief 
/// @param arg 
/// @param a 
/// @return 
int		ft_store(char **arg, t_stack *a);

/// @brief 
/// @param content 
/// @return 
t_stack	*initstack(int content);

/// @brief 
/// @param s 
/// @param args 
/// @return 
void	initargs(t_stack **s, char **args);

#endif