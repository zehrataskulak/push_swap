/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_six.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:59:02 by zzehra            #+#    #+#             */
/*   Updated: 2025/10/16 18:44:20 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    size_2(t_zlist **stack, char c)
{
    if((((*stack)->indx > (*stack)->next->indx) && c == 'a'))
    {
        sx(stack);
        ft_printf("sa\n");        
    }
    else if(((*stack)->indx < (*stack)->next->indx) && c == 'b')
    {
        sx(stack);
        ft_printf("sb\n");
    }
        
}

void    size_3(t_zlist **stack_a, int cs)
{
    t_zlist *tmp;
    tmp = *stack_a;
    if(cs)
    {
        while(tmp)
        {
            tmp->indx -= 2;
            tmp = tmp->next;
        }
    }
    if(((*stack_a)->indx == 2))
    {
        rx(stack_a);
        ft_printf("ra\n");
        if((*stack_a)->indx == 1)
        {
            sx(stack_a);
            ft_printf("sa\n");
        }
    }
    else if(((*stack_a)->indx == 0) && ((*stack_a)->next->indx == 2))
    {
        rx(stack_a);
        ft_printf("ra\n");
        sx(stack_a);
        ft_printf("sa\n");
        rrx(stack_a);
        ft_printf("rra\n");
    }
    else if((*stack_a)->indx == 1)
    {
        if((*stack_a)->next->indx == 2)
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

void    size_other(t_zlist **stack_a, t_zlist **stack_b, int len)
{
    
    while(len--)
    {
        if(((*stack_a)->indx == 0) || ((*stack_a)->indx == 1))
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
    if(t_zlstsize(*stack_a) == 2)
    {
        size_2(stack_a, 'a');
        size_2(stack_b, 'b');
    }
    else if(t_zlstsize(*stack_a) == 3)
    {
        size_2(stack_b, 'b');
        size_3(stack_a, 1);
    }
    
    while(*stack_b)
    {
        px(stack_b, stack_a);
        ft_printf("pa\n");
    }
}

void    less_than_six(t_zlist **stack_a, t_zlist **stack_b, int len)
{
    *stack_b = NULL;
    if(len == 2)
        size_2(stack_a, 'a');
    else if (len == 3)
        size_3(stack_a, 0);
    else
        size_other(stack_a, stack_b, len);
}