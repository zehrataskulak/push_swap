/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:15:29 by zzehra            #+#    #+#             */
/*   Updated: 2025/09/24 20:58:41 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// m+y
// m = if smallest's position <= len(stack_b)/2
// y = if target's position <= len(stack_a)/2
void    case_1(t_zlist **stack_a, t_zlist **stack_b)
{
    int pstion_a;
    int pstion_b;
    int n;
    
    pstion_a = find_target(*stack_a, *stack_b);
    pstion_b = where_smallest(*stack_b);
    if(pstion_a > pstion_b)
    {
        n = pstion_b;
        while(n)
        {
            rr(stack_a, stack_b);
            ft_printf("rr\n");
            n--;
        }
        n = pstion_a - pstion_b;
        while(n)
        {
            rx(stack_a);
            ft_printf("ra\n");
            n--;
        }
    }
    else if(pstion_b > pstion_a)
    {
        n = pstion_a;
        while(n)
        {
            rr(stack_a, stack_b);
            ft_printf("rr\n");
            n--;
        }
        n = pstion_b - pstion_a;
        while(n)
        {
            rx(stack_b);
            ft_printf("rb\n");
            n--;
        }
    }
    else
    {
        n = pstion_b;
        while(n)
        {
            rr(stack_a, stack_b);
            ft_printf("rr\n");
            n--;
        }
    }
    //px(stack_b, stack_a);
    //ft_printf("pa\n");
}

// n+z
// n = if smallest's position > len(stack_b)/2
// z = if target's position > len(stack_a)/2
void    case_2(t_zlist **stack_a, t_zlist **stack_b)
{
    t_zlist *tmp;
    int pstion_a;
    int pstion_b;
    int n;
    
    tmp = *stack_a;
    pstion_a = t_zlstsize(tmp) - find_target(*stack_a, *stack_b);
    tmp = *stack_b;
    pstion_b = t_zlstsize(tmp) - where_smallest(*stack_b);
    if(pstion_a > pstion_b)
    {
        n = pstion_b;
        while(n)
        {
            rrr(stack_a, stack_b);
            ft_printf("rrr\n");
            n--;
        }
        n = pstion_a - pstion_b;
        while(n)
        {
            rrx(stack_a);
            ft_printf("rra\n");
            n--;
        }
    }
    else if(pstion_b > pstion_a)
    {
        n = pstion_a;
        while(n)
        {
            rrr(stack_a, stack_b);
            ft_printf("rrr\n");
            n--;
        }
        n = pstion_b - pstion_a;
        while(n)
        {
            rrx(stack_b);
            ft_printf("rrb\n");
            n--;
        }
    }
    else
    {
        n = pstion_a;
        while(n)
        {
            rrr(stack_a, stack_b);
            ft_printf("rrr");
            n--;
        }
    }
    //px(stack_b, stack_a);
    //ft_printf("pa\n");
}

// m+z 
// m = if smallest's position <= len(stack_b)/2
// z = if target's position > len(stack_a)/2
void    case_3(t_zlist **stack_a, t_zlist **stack_b)
{
    t_zlist *tmp;
    int n;
    
    tmp = *stack_a;
    n = t_zlstsize(tmp) - find_target(*stack_a, *stack_b);
    while(n)
    {
        rrx(stack_a);
        ft_printf("rra\n");
        n--;
    }
    n = where_smallest(*stack_b);
    while(n)
    {
        rx(stack_b);
        ft_printf("rb\n");
        n--;
    }
    //px(stack_b, stack_a);
    //ft_printf("pa\n");
}

// n+y
// n = if smallest's position > len(stack_b)/2
// y = if target's position >= len(stack_a)/2
void    case_4(t_zlist **stack_a, t_zlist **stack_b)
{
    t_zlist *tmp;
    int n;

    tmp = *stack_b;
    n = t_zlstsize(tmp) - where_smallest(*stack_b);
    while(n)
    {
        rrx(stack_b);
        ft_printf("rrb\n");
        n--;
    }
    n = find_target(*stack_a, *stack_b);
    while(n)
    {
        rx(stack_a);
        ft_printf("ra\n");
        n--;
    }
    //px(stack_b, stack_a);
    //ft_printf("pa\n");
}