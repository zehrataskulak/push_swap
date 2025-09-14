/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:12:30 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/14 12:28:34 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int argc, char **argv)
{
	int i = argc - 1;
	int *cont;
	t_zlist	*node = NULL;
	t_zlist *node_b = NULL;
	
	read_arguments(argc, argv, &node);

	px(&node, &node_b);
	px(&node, &node_b);
	px(&node, &node_b);
	while(node -> next)
	{
		ft_printf("%d  ", *(int *)node->content);
		node = node -> next;
	}
	ft_printf("%d  ", *(int *)node->content);
	
	ft_printf("\n\n");
	/*while(node -> prev)
	{
		ft_printf("%d  ", *(int *)node->content);
		node = node -> prev;
	}
	ft_printf("%d  ", *(int *)node->content);
	t_zlstclear(&node, free);*/

	/*int *a = (int *)node->next->content;
	t_zlstdelone(node->next, free);
	ft_printf("%d\n",*(int *)node->content);
	ft_printf("%d\n", *a);
	ft_printf("%d\n", *(int *)node->next->content);*/

	/*int *a = (int *)node->next->content;
	ft_printf("%d\n", *a);*/

	while(node_b -> next)
	{
		ft_printf("%d  ", *(int *)node_b->content);
		node_b = node_b -> next;
	}
	ft_printf("%d  ", *(int *)node_b->content);
	
	
}