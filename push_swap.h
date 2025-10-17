/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:57:26 by ztaskula          #+#    #+#             */
/*   Updated: 2025/10/16 23:42:12 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include "t_zlist/t_zlist.h"

long	z_atoi(const char *str);
void	is_range(char **args, int is_split);
void	is_dup(char **argv, int is_split);
void	read_arguments(int argc, char **argv, t_zlist **stack_a);

void	find_indx(t_zlist **stack_a);
void	compare_bits(t_zlist **stack_a, t_zlist **stack_b);
void	size_2(t_zlist **stack, char c);
void	size_3(t_zlist **stack_a, int cs);
void	size_other(t_zlist **stack_a, t_zlist **stack_b, int len);
void	less_than_six(t_zlist **stack_a, t_zlist **stack_b, int len);

void	px(t_zlist **stack_take, t_zlist **stack_push);
void	rx(t_zlist **stack);
void	rr(t_zlist **stack_a, t_zlist **stack_b);
void	rrx(t_zlist **stack);
void	rrr(t_zlist **stack_a, t_zlist **stack_b);
void	sx(t_zlist **stack);
void	ss(t_zlist **stack_a, t_zlist **stack_b);

#endif
