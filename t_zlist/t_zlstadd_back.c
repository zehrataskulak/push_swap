/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 11:48:56 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/14 11:55:06 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

void	t_zlstadd_back(t_zlist **lst, t_zlist *new)
{
	t_zlist	*mv;

	mv = *lst;
	if(new == NULL)
		return ;
	if(*lst == NULL)
		*lst = new;
	else
	{
		while(mv->next != NULL)
			mv = mv->next;
		mv->next = new;
	}
}