/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_steps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 15:08:56 by zzehra            #+#    #+#             */
/*   Updated: 2025/09/24 23:12:46 by zzehra           ###   ########.fr       */
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
    //ft_printf("\nthis is position of smallest in b: %d\n", num);
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
    //ft_printf("\nthis is position of biggest in a: %d\n", num);
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
    /*if(!stack_b)
        return (-1);*/
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
    //ft_printf("\n\nthis is my biggest:::%d\nthis is tmp content::%d\n\n", *(int *)biggest->content, *(int *)tmp->content);
    
    tmp = stack_b;
    //ft_printf("\ntmp's content: %d\n", *(int *)tmp->content);
    //ft_printf("\n\nthis is my biggest:::%d\n\n", *(int *)biggest->content);
    /*if(*(int *)tmp->content > *(int *)biggest->content)
    {
        ft_printf("\nwe're in\n");
        num = 0;
        num = where_biggest(stack_a) + 1;
        ft_printf("\nnum:%d\n", num);
        return(num);
    }*/
            
    if(tmp)
        num = where_smallest(tmp);
    num++;
    while(tmp && num)
    {
        smallest = tmp;
        tmp = tmp->next;
        num--;
    }
    /*tmp = stack_a;
    if(*(int *)smallest->content < *(int *)tmp->content)
    {
        ft_printf("\nthis is my target: %d\n", target);
        return (target);
    }*/
    tmp = stack_a;
    //
    //
    //
    
    while(tmp && (*(int *)smallest->content > *(int *)tmp->content))
    {   
        /*ft_printf("\n\nthis is my biggest:%d\n", *(int *)biggest->content);
        ft_printf("\nnum:%d\n", where_biggest(stack_a));
        ft_printf("\ntmp' content:%d\n", *(int *)tmp->content);*/
        if(*(int *)smallest->content > *(int *)biggest->content)
        {
            //ft_printf("\nwe're in\n");
            return(where_biggest(stack_a) + 1);
        }
        target++;
        tmp = tmp->next;
    }
    //ft_printf("\nthis is my target: %d\n", target);
    return (target);
}

/*void    idk(t_zlist **stack_a, t_zlist **stack_b)
{
    t_zlist *tmp1;
    t_zlist *tmp2;
    int n;

    tmp1 = *stack_b;
    tmp2 = *stack_a;
    n = where_smallest(*stack_b) - find_target(*stack_a, *stack_b) - 1;
    if (n < 0)
        n *= -1;

        ///////////DOESNT WORK CORRECTLY DO IT BETTER///////////////////
    if((where_smallest(*stack_b) <= t_zlstsize(tmp1)) && 
            (find_target(*stack_a, *stack_b) <= t_zlstsize(tmp2)))
    {
        while(n)
        {
            rr(stack_a, stack_b);
            ft_printf("rr\n");
            n--;
        }
        px(stack_b, stack_a);
        ft_printf("pa\n");
    }
    else if((where_smallest(*stack_b) > t_zlstsize(tmp1)) && 
            (find_target(*stack_a, *stack_b) > t_zlstsize(tmp2)))
    {
        while(n)
        {
            rrr(stack_a, stack_b);
            ft_printf("rrr\n");
            n--;
        }
        px(stack_b, stack_a);
        ft_printf("pa\n");
    }
    else if((where_smallest(*stack_b) <= t_zlstsize(tmp1)) && 
            (find_target(*stack_a, *stack_b) > t_zlstsize(tmp2)))
    {
        
    }
}*/

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
        else
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
    //ft_printf("\nlast fix num:: %d\n", num);
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
