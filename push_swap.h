/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:57:26 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/24 23:11:33 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include "t_zlist/t_zlist.h"


long	z_atoi(const char *str);
void	is_range(char **args, int is_split);
void	is_dup(char **argv, int is_split);
void    find_steps(t_zlist **stack_a, t_zlist **stack_b);
void	read_arguments(int argc, char **argv, t_zlist **stack_a);
int    where_smallest(t_zlist   *stack_b);
int    find_target(t_zlist *stack_a, t_zlist *stack_b);
void    last_fix(t_zlist **stack_a);

void    case_1(t_zlist **stack_a, t_zlist **stack_b);
void    case_2(t_zlist **stack_a, t_zlist **stack_b);
void    case_3(t_zlist **stack_a, t_zlist **stack_b);
void    case_4(t_zlist **stack_a, t_zlist **stack_b);

void	px(t_zlist **stack_take, t_zlist **stack_push);
void    rx(t_zlist  **stack);
void    rr(t_zlist  **stack_a, t_zlist **stack_b);
void    rrx(t_zlist **stack);
void    rrr(t_zlist **stack_a, t_zlist **stack_b);
void    sx(t_zlist  **stack);
void    ss(t_zlist  **stack_a, t_zlist  **stack_b);


#endif