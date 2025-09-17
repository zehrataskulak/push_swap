/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:18 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/16 01:48:17 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

t_zlist	*t_zlstlast(t_zlist *lst)
{
	if(!lst)
		return (NULL);
	while (lst->next != NULL)
    {
        lst = lst->next;
    }
	return (lst);
}