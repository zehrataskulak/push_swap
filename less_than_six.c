/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_six.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:40:25 by zzehra            #+#    #+#             */
/*   Updated: 2025/10/17 16:18:15 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	less_than_six(t_zlist **stack_a, t_zlist **stack_b, int len)
{
	if (len == 2)
		size_2(stack_a, 'a');
	else if (len == 3)
		size_3(stack_a, 0);
	else
		size_other(stack_a, stack_b, len);
}
