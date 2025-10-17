/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_swap_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:10:18 by ztaskula          #+#    #+#             */
/*   Updated: 2025/10/15 14:51:18 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sx(t_zlist **stack)
{
	t_zlist	*tmp1;
	t_zlist	*tmp2;
	void	*content;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	tmp1 = *stack;
	tmp2 = (*stack)->next;
	content = tmp1->content;
	tmp1->content = tmp2->content;
	tmp2->content = content;
}

void	ss(t_zlist **stack_a, t_zlist **stack_b)
{
	sx(stack_a);
	sx(stack_b);
}
