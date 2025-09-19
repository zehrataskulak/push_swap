/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_zlist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:31:08 by ztaskula          #+#    #+#             */
/*   Updated: 2025/09/19 17:01:30 by zzehra           ###   ########.fr       */
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
	int		small;
	int	keep;
}	t_zlist;


t_zlist	*t_zlstnew(void *content);
void	t_zlstadd_front(t_zlist **lst, t_zlist *new);
int	t_zlstsize(t_zlist *lst);
t_zlist	*t_zlstlast(t_zlist *lst);
void	t_zlstdelone(t_zlist *lst, void (*del)(void *));
void	t_zlstclear(t_zlist **lst, void (*del)(void *));
void	t_zlstadd_back(t_zlist **lst, t_zlist *new);
void    find_lis(t_zlist *stack_a);
void    send_unsorted(t_zlist **stack_a, t_zlist **stack_b);

#endif