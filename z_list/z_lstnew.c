/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_lstnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:44:38 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/11 19:59:22 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "z_list.h"

z_list	*z_lstnew(void *content)
{
	z_list	*newnode;

	newnode = malloc(sizeof(z_list));
	if(newnode == NULL)
		return (NULL);
	newnode -> content = content;
	newnode -> next = NULL;
	newnode -> prev = NULL;
	return (newnode);
}