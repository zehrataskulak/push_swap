/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:31:08 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/14 11:55:31 by ztaskula         ###   ########.fr       */
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
int	t_zlstsize(t_zlist *lst);
t_zlist	*t_zlstlast(t_zlist *lst);
void	t_zlstdelone(t_zlist *lst, void (*del)(void *));
void	t_zlstclear(t_zlist **lst, void (*del)(void *));
void	t_zlstadd_back(t_zlist **lst, t_zlist *new);

#endif