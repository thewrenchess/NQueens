/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nq_newlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 13:33:11 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/18 10:53:49 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/nqueens.h"

char	*nq_newboard(void) {
	char	*result;
	int		i;

	result = (char*)malloc(sizeof(result) * 73);
	for (i = 0; i < 72; i++) {
		if (!((i + 1) % 9))
			result[i] = '\n';
		else
			result[i] = '.';
	}
	result[i] = '\0';
	return result;
}

t_list	*nq_newlist(void) {
	t_list	*result;

	result = (t_list*)malloc(sizeof(t_list));
	result->board = NULL;
	result->next = NULL;
	return result;
}
