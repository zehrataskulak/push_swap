/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_push_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:13:16 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/16 15:41:56 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	px(t_zlist **stack_take, t_zlist **stack_push)
{
	t_zlist	*tmp;

	if ((*stack_take) == NULL || stack_take == NULL)
		return ;
	tmp = *stack_take;
	*stack_take = (*stack_take)->next;
	if (*stack_take)
		(*stack_take)->prev = NULL;
	tmp->next = NULL;
	tmp->prev = NULL;
	t_zlstadd_front(stack_push, tmp);
}
