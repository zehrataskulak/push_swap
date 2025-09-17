/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 21:08:08 by zzehra            #+#    #+#             */
/*   Updated: 2025/09/17 21:09:21 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	z_atoi(const char *str)
{
	long	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if(!str[i] || str[i] == 32 || str[i] == 9 || str[i] == 10)
		return (num * sign);
	else
		return(0);
}

void	is_range(char **args, int is_split)
{
	int i;
	int j;
	long num;

	j = 0;
	i = 0;
	if(!is_split)
		i = 1;
	while(args[i])
	{
		num = z_atoi(args[i]);
		if(num > 2147483647 || num < -2147483648  || (num == 0 && args[i][0] != '0'))
		{
			if(is_split)
			{
				while(args[j])     
					free(args[j++]);
				free(args);
			}
			exit(ft_printf("Error\n"));
		}
		i++;
	}
}

void	is_dup(char **argv, int is_split)
{
	int i;
	int j;

	i = 1;
	if(is_split)
	{
		i = 0;
		argv = ft_split(argv[1], ' ');
	}
	while(argv[i])
	{
		j = i + 1;
		while(argv[j])
		{
			if(z_atoi(argv[i]) == z_atoi(argv[j]))
				exit(ft_printf("Error\n"));
			j++;
		}
		i++;
	}
	if(is_split)
	{
		j = 0;
		while(argv[j])     
			free(argv[j++]);
		free(argv);
	}
}