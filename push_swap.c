/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:34:24 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/10 20:00:53 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_tmp;
	int *num;
	int i;
	
	i = 1;
	stack_a = NULL;
	while (i < argc)
	{
		num = malloc(sizeof(int));
		*num = ft_atoi(argv[i++]);
		stack_tmp = ft_lstnew(num);
		ft_lstadd_back(&stack_a, stack_tmp);
	}
	stack_tmp->next = stack_a;
}