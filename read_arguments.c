/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_arguments.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 21:10:30 by zzehra            #+#    #+#             */
/*   Updated: 2025/09/17 21:10:31 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	read_1(int argc, char **argv, t_zlist **stack_a)
{
	t_zlist	*tmp;
	int	*cont;
	int i;

	i = 1;
	if(argc == 1)
		return ;
	is_range(argv, 0);
	while (i < argc)
	{
		cont = malloc(sizeof(int));
		if(cont == NULL)
			return ;
		*cont = z_atoi(argv[i]);
		tmp = t_zlstnew(cont);
		t_zlstadd_back(stack_a, tmp);
		i++;
	}
	
}

void	read_2(char **argv, t_zlist **stack_a)
{
	char	**args;
	int	*cont;
	t_zlist	*tmp;
	int	i;
	int j;

	i = 0;
	j = 0;
	args = ft_split(argv[1], ' ');
	if (!args)
		return ;
	is_range(args, 1);
	while (args[i])
	{
		cont = malloc(sizeof(int));
		if(cont == NULL)
			return ;
		*cont = z_atoi(args[i]);
		tmp = t_zlstnew(cont);
		t_zlstadd_back(stack_a, tmp);
		i++;
	}
	while(args[j])     
		free(args[j++]);
	free(args);
}



void	read_arguments(int argc, char **argv, t_zlist **stack_a)
{

	if(argc == 2)
	{
		is_dup(argv, 1);
		read_2(argv, stack_a);
	}
	else
	{
		is_dup(argv, 0);
		read_1(argc, argv, stack_a);
	}
	if((*stack_a) == NULL)
		exit(0);
}