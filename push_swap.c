/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:12:30 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/11 21:20:30 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"





int main(int argc, char **argv)
{
	int i = argc - 1;
	int *cont;
	z_list	*tmp;
	z_list	*node = NULL;
	
	while (i > 0)
	{
		cont = malloc(sizeof(int));
		*cont = ft_atoi(argv[i--]);
		tmp = z_lstnew(cont);
		z_lstadd_front(&node, tmp);
	}
	
	while(node -> next)
	{
		ft_printf("%d  ", *(int *)node->content);
		node = node -> next;
	}
	ft_printf("%d  ", *(int *)node->content);
	
	ft_printf("\n\n");
	
	while(node -> prev)
	{
		ft_printf("%d  ", *(int *)node->content);
		node = node -> prev;
	}
	ft_printf("%d  ", *(int *)node->content);
	
}