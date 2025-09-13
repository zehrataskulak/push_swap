/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:18 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/13 17:59:19 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

t_zlist	*t_zlstlast(t_zlist *lst)
{
	int	a;
	t_zlist	*mv;

	if(!lst)
		return (NULL);
	a = t_zlstsize(lst);
	while (a > 1)
	{
		mv = mv->next;
		a--;
	}
	return (mv);
}