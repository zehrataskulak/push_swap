/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_unsorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:08:56 by zzehra            #+#    #+#             */
/*   Updated: 2025/09/19 17:07:47 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    send_unsorted(t_zlist **stack_a, t_zlist **stack_b)
{
    int size;
    
    size = t_zlstsize(*stack_a);
    while(stack_a && size)
    {
        if(!(*stack_a)->keep)
        {
            px(stack_a, stack_b);
            ft_printf("pa\n");
        }
        else
        {
            rx(stack_a);
            ft_printf("ra\n");
        }
        size--;
    }
}

void    