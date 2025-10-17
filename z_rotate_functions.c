/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_rotate_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:13:10 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/16 01:43:37 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rx(t_zlist **stack)
{
	t_zlist	*tmp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	tmp = *stack;
	(*stack) = (*stack)->next;
	(*stack)->prev = NULL;
	t_zlstadd_back(stack, tmp);
	tmp->next = NULL;
}

void	rr(t_zlist **stack_a, t_zlist **stack_b)
{
	rx(stack_a);
	rx(stack_b);
}
