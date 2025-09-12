/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:26 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/12 12:56:03 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

void	t_zlstadd_front(t_zlist **lst, t_zlist *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new -> next = *lst;
	if (*lst != NULL)
		(*lst) -> prev = new;
	*lst = new;
}