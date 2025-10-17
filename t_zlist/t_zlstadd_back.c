/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:48:56 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/16 01:17:14 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

void	t_zlstadd_back(t_zlist **lst, t_zlist *new)
{
	t_zlist	*tmp;

	if (new == NULL)
		return ;
	new->next = NULL;
	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = t_zlstlast(*lst);
		tmp->next = new;
		new->prev = tmp;
	}
}
