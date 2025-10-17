/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_six_helper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:59:02 by zzehra            #+#    #+#             */
/*   Updated: 2025/10/16 23:40:38 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	size_2(t_zlist **stack, char c)
{
	if ((((*stack)->indx > (*stack)->next->indx) && c == 'a'))
	{
		sx(stack);
		ft_printf("sa\n");
	}
	else if (((*stack)->indx < (*stack)->next->indx) && c == 'b')
	{
		sx(stack);
		ft_printf("sb\n");
	}
}

void	size_3_0(t_zlist **stack_a)
{
	if (((*stack_a)->indx == 0) && ((*stack_a)->next->indx == 2))
	{
		rx(stack_a);
		ft_printf("ra\n");
		sx(stack_a);
		ft_printf("sa\n");
		rrx(stack_a);
		ft_printf("rra\n");
	}
	else if ((*stack_a)->indx == 1)
	{
		if ((*stack_a)->next->indx == 2)
		{
			rrx(stack_a);
			ft_printf("rra\n");
		}
		else
		{
			sx(stack_a);
			ft_printf("sa\n");
		}
	}
}

void	size_3(t_zlist **stack_a, int cs)
{
	t_zlist	*tmp;

	tmp = *stack_a;
	if (cs)
	{
		while (tmp)
		{
			tmp->indx -= 2;
			tmp = tmp->next;
		}
	}
	if (((*stack_a)->indx == 2))
	{
		rx(stack_a);
		ft_printf("ra\n");
		if ((*stack_a)->indx == 1)
		{
			sx(stack_a);
			ft_printf("sa\n");
		}
	}
	else
	{
		size_3_0(stack_a);
	}
}

void	size_other_0(t_zlist **stack_a, t_zlist **stack_b)
{
	if (t_zlstsize(*stack_a) == 2)
	{
		size_2(stack_a, 'a');
		size_2(stack_b, 'b');
	}
	else if (t_zlstsize(*stack_a) == 3)
	{
		size_2(stack_b, 'b');
		size_3(stack_a, 1);
	}
}

void	size_other(t_zlist **stack_a, t_zlist **stack_b, int len)
{
	while (len--)
	{
		if (((*stack_a)->indx == 0) || ((*stack_a)->indx == 1))
		{
			px(stack_a, stack_b);
			ft_printf("pb\n");
		}
		else
		{
			rx(stack_a);
			ft_printf("ra\n");
		}
	}
	size_other_0(stack_a, stack_b);
	while (*stack_b)
	{
		px(stack_b, stack_a);
		ft_printf("pa\n");
	}
}
