/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:12:30 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/12 14:05:05 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"





int main(int argc, char **argv)
{
	int i = argc - 1;
	int *cont;
	//t_zlist	*tmp;
	t_zlist	*node = NULL;
	
	/*while (i > 0)
	{
		cont = malloc(sizeof(int));
		*cont = ft_atoi(argv[i--]);
		tmp = t_zlstnew(cont);
		t_zlstadd_front(&node, tmp);
	}*/

	read_arguments(argc, argv, &node);
	
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