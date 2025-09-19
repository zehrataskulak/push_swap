/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:52:06 by zzehra            #+#    #+#             */
/*   Updated: 2025/09/19 15:01:43 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    find_smaller(t_zlist *stack_a)
{
    t_zlist *tmp1;
    t_zlist *tmp2;
    
    tmp1 = stack_a;
    while(tmp1)
    {
        if(tmp1->next)
            tmp2 = tmp1->next;
        while(tmp2)
        {
            if(*(int *)tmp2->content > *(int *)tmp1->content)
                (tmp1->small)++;
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
}

int     find_max(t_zlist *stack_a)
{
    t_zlist *tmp;
    int max;

    tmp = stack_a;
	while (tmp)
	{
		if(tmp->small > max)
			max = tmp->small;
		tmp = tmp->next;
	}
    return(max);
}

void    find_lis_0(t_zlist *stack_a, int max)
{
    t_zlist *tmp1;
    t_zlist *tmp2;
    
	tmp1 = stack_a;
	int a = -2147483648;
	while(tmp1 && max)
	{
		tmp2 = tmp1;
		while(tmp2)
		{
			if(tmp2->small == max && *(int *)tmp2->content > a)
			{
				a = *(int *)tmp2->content;
				tmp2->keep = 1;
				tmp1 = tmp2;
				break ;
			}
			tmp2 = tmp2->next;
		}
		max--;
	}
}

void    find_lis(t_zlist *stack_a)
{
    int max;

    find_smaller(stack_a);
    max = find_max(stack_a);
    find_lis_0(stack_a, max);
}
