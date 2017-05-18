/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nq_getsolution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 14:02:17 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/18 10:53:45 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/nqueens.h"

static void	nq_removelastqueen(char **board, int i, char c) {
	int		k;

	(*board)[i] = '.';
	for (k = i - 9; k >= 0; k -= 9) {
		if ((*board)[k] == c)
			(*board)[k] = '.';
	}
	for (k = i + 9; k < 71; k += 9) {
		if ((*board)[k] == c)
			(*board)[k] = '.';
	}
	for (k = i - 1; k >= 0 && (*board)[k] != '\n'; k -= 1) {
		if ((*board)[k] == c)
			(*board)[k] = '.';
	}
	for (k = i + 1; k < 71 && (*board)[k] != '\n'; k += 1) {
		if ((*board)[k] == c)
			(*board)[k] = '.';
	}
	for (k = i - 10; k >= 0 && (*board)[k] != '\n'; k -= 10) {
		if ((*board)[k] == c)
			(*board)[k] = '.';
	}
	for (k = i - 8; k >= 0 && (*board)[k] != '\n'; k -= 8) {
		if ((*board)[k] == c)
			(*board)[k] = '.';
	}
	for (k = i + 8; k < 71 && (*board)[k] != '\n'; k += 8) {
		if ((*board)[k] == c)
			(*board)[k] = '.';
	}
	for (k = i + 10; k < 71 && (*board)[k] != '\n'; k += 10) {
		if ((*board)[k] == c)
			(*board)[k] = '.';
	}
}

static void	nq_putonequeen(char **board, int i, char c) {
	int		k;

	(*board)[i] = 'Q';
	for (k = i - 9; k >= 0; k -= 9) {
		if ((*board)[k] == '.')
			(*board)[k] = c;
	}
	for (k = i + 9; k < 71; k += 9) {
		if ((*board)[k] == '.')
			(*board)[k] = c;
	}
	for (k = i - 1; k >= 0 && (*board)[k] != '\n'; k -= 1) {
		if ((*board)[k] == '.')
			(*board)[k] = c;
	}
	for (k = i + 1; k < 71 && (*board)[k] != '\n'; k += 1) {
		if ((*board)[k] == '.')
			(*board)[k] = c;
	}
	for (k = i - 10; k >= 0 && (*board)[k] != '\n'; k -= 10) {
		if ((*board)[k] == '.')
			(*board)[k] = c;
	}
	for (k = i - 8; k >= 0 && (*board)[k] != '\n'; k -= 8) {
		if ((*board)[k] == '.')
			(*board)[k] = c;
	}
	for (k = i + 8; k < 71 && (*board)[k] != '\n'; k += 8) {
		if ((*board)[k] == '.')
			(*board)[k] = c;
	}
	for (k = i + 10; k < 71 && (*board)[k] != '\n'; k += 10) {
		if ((*board)[k] == '.')
			(*board)[k] = c;
	}
}

static void	nq_clearnumber(char **board) {
	int	i;

	for (i = 0; (*board)[i]; i++) {
		if ((*board)[i] >= '1' && (*board)[i] <= '8')
			(*board)[i] = '.';
	}
}

static void	nq_putqueen(t_list **node, int n, char **board, int i) {
	if (n == 0) {
		(*node)->board = strdup(*board);
		nq_clearnumber(&((*node)->board));
		(*node)->next = nq_newlist();
		*node = (*node)->next;
		return ;
	}
	while (i < 71 - (n - 1) * 9) {
		while ((*board)[i] && (*board)[i] != '.')
			i++;
		if (i >= 72)
			return ;
		nq_putonequeen(board, i, n + '0');
		nq_putqueen(node, n - 1, board, i);
		nq_removelastqueen(board, i, n + '0');
		i++;
	}
}

t_list		*nq_getsolution(const int n) {
	t_list	*head;
	t_list	*node;
	char	*board;

	head = nq_newlist();
	node = head;
	board = nq_newboard();
	nq_putqueen(&node, n, &board, 0);
	return head;
}
