/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nq_getsolution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 14:02:17 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/15 21:45:26 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/nqueens.h"

// static void	nq_setcorr(t_corr *index, int row, int col) {
// 	index->row = row;
// 	index->col = col;
// }

// static int	nq_putqueen(char ***board) {
// 	static t_corr	index;
// 	t_corr			i;

// 	if (!index)
// 		nq_setcorr(&index, 0, 0);
// 	if (index.col != 7)
// 		nq_setcorr(&i, index.row, index + 1);
// 	else
// 		nq_setcorr(&i, index.row + 1, 0);
// }

t_list		*nq_getsolution(const int n) {
	t_list	*head;
	t_list	*node;
	// int		ret;
	(void)n;

	head = nq_newlist();
	node = head;
	// while (1) {
	// 	ret = nq_putqueen(&(node->board));
	// 	if (ret < 0)
	// 		break;
	// 	node->next = nq_newlist();
	// 	node = node->next;
	// }
	return (head);
}
