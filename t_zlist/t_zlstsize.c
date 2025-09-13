/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:42:12 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/13 17:54:14 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

int	t_zlstsize(t_zlist *lst)
{
	int	size;
	t_zlist	*mv;

	size = 0;
	mv = lst;
	while(mv)
	{
		size++;
		mv = mv->next;
	}
	return(size);
}