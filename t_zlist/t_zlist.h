/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:31:08 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/12 12:56:23 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_ZLIST_H
#define T_ZLIST_H

#include <stdlib.h>


typedef struct l_list
{
	void			*content;
	struct l_list	*next;
	struct l_list	*prev;
}	t_zlist;


t_zlist	*t_zlstnew(void *content);
void	t_zlstadd_front(t_zlist **lst, t_zlist *new);



#endif