/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:26 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/16 01:10:42 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

void	t_zlstadd_front(t_zlist **lst, t_zlist *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	if (*lst != NULL)
    {
        (*lst)->prev = new;
    }
	*lst = new;
	new->prev = NULL;
}