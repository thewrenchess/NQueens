/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nq_listdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 21:34:34 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/15 21:41:07 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/nqueens.h"

static void	ft_memdel(void **ap) {
	if (!ap || !*ap)
		return ;
	free(*ap);
	*ap = NULL;
}

void		ft_strdel(char **as) {
	ft_memdel((void**)as);
}

void		nq_listdel(t_list **lst) {
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *lst;
	while (tmp1) {
		tmp2 = tmp1->next;
		ft_strdel(&(tmp1->board));
		tmp1->next = NULL;
		tmp1 = tmp2;
	}
	*lst = tmp1;
}
