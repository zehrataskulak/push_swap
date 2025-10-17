/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:27:22 by zzehra            #+#    #+#             */
/*   Updated: 2025/10/16 23:31:34 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_indx(t_zlist **stack_a)
{
	t_zlist	*tmp_1;
	t_zlist	*tmp_2;

	tmp_1 = *stack_a;
	while (tmp_1)
	{
		tmp_2 = *stack_a;
		while (tmp_2)
		{
			if ((*(int *)tmp_1->content > *(int *)tmp_2->content)
				&& ((*(int *)tmp_1->content != *(int *)tmp_2->content)))
				(tmp_1->indx)++;
			tmp_2 = tmp_2->next;
		}
		tmp_1 = tmp_1->next;
	}
}

void	compare_bits_0(t_zlist **stack_a, t_zlist **stack_b, int size, int i)
{
	int	bits;

	while (size)
	{
		bits = (((*stack_a)->indx) >> i & 1);
		if (bits == 0)
		{
			px(stack_a, stack_b);
			ft_printf("pb\n");
		}
		else
		{
			rx(stack_a);
			ft_printf("ra\n");
		}
		size--;
	}
}

void	compare_bits(t_zlist **stack_a, t_zlist **stack_b)
{
	int	i;
	int	size;
	int	max_bits;

	i = 0;
	max_bits = 0;
	size = t_zlstsize(*stack_a);
	while ((size -1) >> max_bits)
		max_bits++;
	while (i < max_bits)
	{
		size = t_zlstsize(*stack_a);
		compare_bits_0(stack_a, stack_b, size, i);
		while (*stack_b)
		{
			px(stack_b, stack_a);
			ft_printf("pa\n");
		}
		i++;
	}
}
