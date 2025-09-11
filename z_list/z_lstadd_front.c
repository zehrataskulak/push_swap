/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_lstadd_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:26 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/11 21:10:53 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "z_list.h"

void	z_lstadd_front(z_list **lst, z_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new -> next = *lst;
	if (*lst != NULL)
		(*lst) -> prev = new;
	*lst = new;
}