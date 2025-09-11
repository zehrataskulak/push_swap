/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_list.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:31:08 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/11 20:54:18 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Z_LIST_H
#define Z_LIST_H

#include <stdlib.h>


typedef struct l_list
{
	void			*content;
	struct l_list	*next;
	struct l_list	*prev;
}	z_list;


z_list	*z_lstnew(void *content);
void	z_lstadd_front(z_list **lst, z_list *new);



#endif