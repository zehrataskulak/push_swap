/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_steps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:08:56 by zzehra            #+#    #+#             */
/*   Updated: 2025/09/25 15:16:09 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    send_unsorted(t_zlist **stack_a, t_zlist **stack_b)
{
    int size;
    
    size = t_zlstsize(*stack_a);
    while(*stack_a && size)
    {
        if(!(*stack_a)->keep)
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

int    where_smallest(t_zlist   *stack_b)
{
    t_zlist *smallest;
    t_zlist *tmp;
    int num;
    
    num = 0;
    smallest = stack_b;
    tmp = stack_b;
    if(tmp && (*(int *)tmp->content == *(int *)smallest->content))
        tmp =tmp->next;
    while(tmp)
    {
        if(*(int *)tmp->content < *(int *)smallest->content)
            smallest = tmp;
        tmp = tmp->next;
    }
    tmp = stack_b;
    while(tmp && (*(int *)tmp->content != *(int *)smallest->content))
    {
        num++;
        tmp = tmp->next;
    }
    return (num);
}

int where_biggest(t_zlist *stack_a)
{
    t_zlist *biggest;
    t_zlist *tmp;

    int num;
    
    num = 0;
    biggest = stack_a;
    tmp = stack_a;
    if(tmp && (*(int *)tmp->content == *(int *)biggest->content))
        tmp =tmp->next;
    while(tmp)
    {
        if(*(int *)tmp->content > *(int *)biggest->content)
            biggest = tmp;
        tmp = tmp->next;
    }
    tmp = stack_a;
    while(tmp && (*(int *)tmp->content != *(int *)biggest->content))
    {
        num++;
        tmp = tmp->next;
    }
    return (num);
}



int    find_target(t_zlist *stack_a, t_zlist *stack_b)
{
    t_zlist *smallest;
    t_zlist *biggest;
    t_zlist *tmp;
    int num;
    int target;
    
    num = 0;
    if(!stack_a)
        return (0);
    target = 0;
    tmp = stack_a;
    num = where_biggest(stack_a);
    num++;
    while(tmp && num)
    {
        biggest = tmp;
        tmp = tmp->next;
        num--;
    }
    tmp = stack_b;
    if(tmp)
        num = where_smallest(tmp);
    num++;
    while(tmp && num)
    {
        smallest = tmp;
        tmp = tmp->next;
        num--;
    }
    tmp = stack_a;
    while(tmp && (*(int *)smallest->content > *(int *)tmp->content))
    {   
        if(*(int *)smallest->content > *(int *)biggest->content)
            return(where_biggest(stack_a) + 1);
        target++;
        tmp = tmp->next;
    }
    return (target);
}


int find_targettt(t_zlist *stack_a, t_zlist *stack_b)
{
    t_zlist *smallest;
    t_zlist *tmp;
    int num;
    int target = 0;

    if (!stack_a || !stack_b)
        return (0);

    num = where_smallest(stack_b);
    tmp = stack_b;
    while (num--)
        tmp = tmp->next;
    smallest = tmp;

    tmp = stack_a;
    while (tmp && (*(int *)smallest->content > *(int *)tmp->content))
    {
        target++;
        tmp = tmp->next;
    }

    return (target);
}


int max(int a, int b)
{
    int max;

    max = a;
    if (b > max)
        max = b;
    return (max);
}

int    find_cost(int pstion_a, int pstion_b, int len_stack_a, int len_stack_b)
{
    int cost_case_1; 
    int cost_case_2; 
    int cost_case_3;
    int cost_case_4;
    int min;
    int cost;

    cost_case_1 = max(pstion_a, pstion_b);
    cost_case_2 = max(len_stack_a - pstion_a, len_stack_b - pstion_b);
    cost_case_3 = (len_stack_a - pstion_a) + pstion_b;
    cost_case_4 = (len_stack_b - pstion_b) + pstion_a;
    min = cost_case_1;
    cost = 1;
    if(cost_case_2 < min)
    {
        min = cost_case_2;
        cost = 2;
    }
    else if(cost_case_3 < min)
    {
        min = cost_case_3;
        cost = 3;
    }  
    else if(cost_case_4 < min)
    {
        min = cost_case_4;
        cost = 4;
    }    
    return (cost);
}




void    find_steps(t_zlist **stack_a, t_zlist **stack_b)
{
    int pstion_a;
    int pstion_b;
    int len_stack_a;
    int len_stack_b;

    
    send_unsorted(stack_a, stack_b);
    len_stack_a = t_zlstsize(*stack_a);
    len_stack_b = t_zlstsize(*stack_b);
    
    while(len_stack_b)
    {
        pstion_a = find_target(*stack_a, *stack_b);
        pstion_b = where_smallest(*stack_b);
        if((pstion_b <= len_stack_b/2) && (pstion_a <= len_stack_a/2))
            case_1(stack_a, stack_b);
        else if((pstion_b > len_stack_b/2) && (pstion_a > len_stack_a/2))
            case_2(stack_a, stack_b);
        else if((pstion_b <= len_stack_b/2) && (pstion_a > len_stack_a/2))
            case_3(stack_a, stack_b);
        else if((pstion_b > len_stack_b/2) && (pstion_a <= len_stack_a/2))
            case_4(stack_a, stack_b);
        px(stack_b, stack_a);
        ft_printf("pa\n");
        len_stack_a++;
        len_stack_b--; 
    }
    
}


void    last_fix(t_zlist **stack_a)
{
    t_zlist *tmp;
    int num;
    int size;

    tmp = *stack_a;
    num = 0;
    size = t_zlstsize(tmp);
    while(tmp->next && (*(int *)tmp->content < *(int *)tmp->next->content))
    {
        num++;
        tmp = tmp->next;
    }
    num++;

    tmp = *stack_a;
    if(num > size/2)
    {
        num = size - num;
        while(num)
        {
            rrx(stack_a);
            ft_printf("rra\n");
            num--;
        }
    }
    else
    {
        while(num)
        {
            rx(stack_a);
            ft_printf("ra\n");
            num--;
        }
    }
    
}
