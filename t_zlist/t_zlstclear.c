/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:29 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/16 01:48:46 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

void	t_zlstclear(t_zlist **lst, void (*del)(void *))
{
	t_zlist	*mv;

	if (!lst || !del)
		return ;
	while(*lst)
	{
		mv = (*lst)->next;
		t_zlstdelone(*lst, del);
		*lst = mv;
	}
}