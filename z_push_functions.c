/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_push_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:13:16 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/14 12:06:25 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	px(t_zlist **stack_take, t_zlist **stack_push)
{
	t_zlist	*tmp;
	int	*contnt;

	if ((*stack_take) == NULL)
		return ;
	contnt = malloc(sizeof(int));
	contnt = (*stack_take)->content;
	tmp = t_zlstnew(contnt);
	t_zlstadd_front(stack_push, tmp);
	*stack_take = (*stack_take)->next;
}