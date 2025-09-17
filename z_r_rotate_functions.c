/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_r_rotate_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:13:13 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/16 13:23:38 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrx(t_zlist **stack)
{
    t_zlist *tmp;
    
    if (*stack == NULL || (*stack)->next == NULL)
        return;
    tmp = t_zlstlast(*stack);
    tmp->prev->next = NULL;
    tmp->prev = NULL;
    t_zlstadd_front(stack, tmp);
}

void    rrr(t_zlist **stack_a, t_zlist **stack_b)
{
    rrx(stack_a);
    rrx(stack_b);
}