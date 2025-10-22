/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:38 by ztaskula          #+#    #+#             */
/*   Updated: 2025/10/22 12:27:57 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

t_zlist	*t_zlstnew(void *content)
{
	t_zlist	*newnode;

	newnode = malloc(sizeof(t_zlist));
	if (newnode == NULL)
		return (NULL);
	newnode -> content = content;
	newnode -> next = NULL;
	newnode -> prev = NULL;
	newnode -> indx = 0;
	return (newnode);
}
