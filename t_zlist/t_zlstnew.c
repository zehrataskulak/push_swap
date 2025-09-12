/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:38 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/12 12:55:50 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_zlist.h"

t_zlist	*t_zlstnew(void *content)
{
	t_zlist	*newnode;

	newnode = malloc(sizeof(t_zlist));
	if(newnode == NULL)
		return (NULL);
	newnode -> content = content;
	newnode -> next = NULL;
	newnode -> prev = NULL;
	return (newnode);
}