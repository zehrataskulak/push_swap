/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:12:30 by ztaskula          #+#    #+#             */
/*   Updated: 2025/10/16 22:18:04 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_zlist	*stack_a;
	t_zlist	*stack_b;
	int		len;

	stack_a = NULL;
	stack_b = NULL;
	read_arguments(argc, argv, &stack_a);
	find_indx(&stack_a);
	len = t_zlstsize(stack_a);
	if (len < 6)
		less_than_six(&stack_a, &stack_b, len);
	else
		compare_bits(&stack_a, &stack_b);
	t_zlstclear(&stack_a, free);
	t_zlstclear(&stack_b, free);
}
