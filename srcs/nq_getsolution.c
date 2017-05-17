/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nq_getsolution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 14:02:17 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/16 16:40:48 by yherrera         ###   ########.fr       */
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

static void	nq_putqueen(t_list **nodes, int n) {
	if (n <= 0)
}

t_list		*nq_getsolution(const int n) {
	t_list	*head;
	t_list	*node;

	head = nq_newlist();
	node = head;
	nq_putqueen(&node, n);
	return head;
}

// static int	nq_putqueen(char **board, int n) {
// 	static int	index;
// 	int			*corrs;
// 	int			count;
// 	int			i;

// 	corrs = (int*)malloc(sizeof(i) * n);
// 	count = n;
// 	for(i = index; i < 71; i++) {
// 		if ((*board)[i] == '.') {
// 			nq_putonequeen(board, i, count + '0');
// 			corrs[n - count] = i;
// 			count--;
// 		}
// 		if (!count)
// 			break ;
// 		if (i == 70) {
// 			count++;
// 			nq_removelastqueen(board, corrs[n - count], count + '0');
// 			i = corrs[n - count];
// 		}
// 	}
// 	free(corrs);
// 	corrs = NULL;
// 	index++;
// 	printf("index: %d; count: %d\n", index, count);
// 	if (count || index >= 71 - (n - 1) * 9)
// 		return -1;
// 	return 0;
// }

// t_list		*nq_getsolution(const int n) {
// 	t_list	*head;
// 	t_list	*node;
// 	int		ret;

// 	head = nq_newlist();
// 	node = head;
// 	ret = 0;
// 	while (!ret) {
// 		ret = nq_putqueen(&(node->board), n);
// 		printf("%d\n", ret);
// 		if (!ret) {
// 			node->next = nq_newlist();
// 			node = node->next;
// 		} else
// 			nq_listdellast(&head);
// 	}
// 	return head;
// }
