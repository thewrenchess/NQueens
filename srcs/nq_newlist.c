/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nq_newlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 13:33:11 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/15 21:41:07 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/nqueens.h"

static void	ft_bzero(void *s, size_t n) {
	unsigned char	*temp;
	size_t			i;

	if (!s)
		return ;
	temp = (unsigned char*)s;
	for (i = 0; i < n; i++) {
		temp[i] = '\0';
	}
}

static void	*ft_memalloc(size_t size) {
	void	*rs;

	rs = malloc(size);
	if (!rs)
		return (NULL);
	ft_bzero(rs, size);
	return (rs);
}

static char	*ft_strnew(size_t size) {
	return ((char*)ft_memalloc(size + 1));
}

t_list		*nq_newlist(void) {
	t_list	*result;

	result = (t_list*)malloc(sizeof(t_list));
	result->board = ft_strnew(72);
	result->next = NULL;
	return (result);
}
