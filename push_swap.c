/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:12:30 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/19 15:19:47 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int argc, char **argv)
{
	t_zlist	*node = NULL;
	t_zlist *node_b = NULL;
	
	read_arguments(argc, argv, &node);
	t_zlist	*current;
	

	/*px(&node, &node_b);
	px(&node, &node_b);
	px(&node, &node_b);
	px(&node, &node_b);
	px(&node, &node_b);

	px(&node_b, &node);
	px(&node_b, &node);
	px(&node_b, &node);
	px(&node_b, &node);
	rx(&node);
	rx(&node);
	rx(&node);
	rx(&node);
	rr(&node, &node_b);

	rrx(&node);
	rrx(&node);
	rrx(&node);
	rrx(&node);
	rrx(&node);
	rrr(&node, &node_b);
	rrr(&node, &node_b);
	rrr(&node, &node_b);
	rrr(&node, &node_b);
	rrr(&node, &node_b);
	
	sx(&node);
	ss(&node, &node_b);*/
	//px(&node, &node_b);
	//px(&node, &node_b);
	//px(&node, &node_b);
	//px(&node, &node_b);
	//px(&node_b, &node);
	//px(&node_b, &node);
	//px(&node_b, &node);
	
	
	
	find_lis(node);
	
	
	current = node;
	while(current && (current -> next))
	{
		ft_printf("%d.%d.%d  ", *(int *)current->content, current->small, current->keep);
		current = current -> next;
	}
	if(current)
		ft_printf("%d.%d.%d  ", *(int *)current->content, current->small, current->keep);
	
	ft_printf("\n");
	while(current && (current -> prev))
	{
		ft_printf("%d  ", *(int *)current->content);
		current = current -> prev;
	}
	if(current)
		ft_printf("%d  ", *(int *)current->content);

	ft_printf("\n\n");	

	current = node_b;
	while(current && (current -> next))
	{
		ft_printf("%d  ", *(int *)current->content);
		current = current -> next;
	}
	if(current)
		ft_printf("%d  ", *(int *)current->content);
	
	ft_printf("\n");
	while(current && (current -> prev))
	{
		ft_printf("%d  ", *(int *)current->content);
		current = current -> prev;
	}
	if(current)
		ft_printf("%d  ", *(int *)current->content);
	
	ft_printf("\n\n");

	
	current = node;
	while(current && (current -> next))
	{
		if(current->keep)
			ft_printf("%d  ", *(int *)current->content);
		current = current -> next;
	}
	if(current && current->keep)
		ft_printf("%d  ", *(int *)current->content);
	
	ft_printf("\n");
	while(current && (current -> prev))
	{
		if(current->keep)
			ft_printf("%d  ", *(int *)current->content);
		current = current -> prev;
	}
	if(current && current->keep)
		ft_printf("%d  ", *(int *)current->content);
	ft_printf("\n");


	/////////////////////////////////////////////////////////////////////////7


	send_unsorted(&node, &node_b);
	ft_printf("///////////////////////////////////////////////////////////////////////////////////////////////\n");

	current = node;
	ft_printf("node a:\n");
	while(current && (current -> next))
	{
		ft_printf("%d  ", *(int *)current->content);
		current = current -> next;
	}
	if(current)
		ft_printf("%d  ", *(int *)current->content);
	
	ft_printf("\n");
	while(current && (current -> prev))
	{
		ft_printf("%d  ", *(int *)current->content);
		current = current -> prev;
	}
	if(current)
		ft_printf("%d  ", *(int *)current->content);

	ft_printf("\n\n");	

	current = node_b;
	ft_printf("node b:\n");
	while(current && (current -> next))
	{
		ft_printf("%d  ", *(int *)current->content);
		current = current -> next;
	}
	if(current)
		ft_printf("%d  ", *(int *)current->content);
	
	ft_printf("\n");
	while(current && (current -> prev))
	{
		ft_printf("%d  ", *(int *)current->content);
		current = current -> prev;
	}
	if(current)
		ft_printf("%d  ", *(int *)current->content);
	
	ft_printf("\n\n");

	

	t_zlstclear(&node, free);
	t_zlstclear(&node_b, free);
}