/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 13:17:50 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/18 10:53:43 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/nqueens.h"

// int remove(const char *filename)

int main(int args, char **argv) {
	int		n;
	t_list	*answers;

	if (args != 2 || !argv) {
		USAGE;
		return -1;
	}
	n = atoi(argv[1]);
	if (n < 1 || n > 8) {
		USAGE;
		return -1;
	}
	answers = nq_getsolution(n);
	nq_writetofile(answers);
	nq_listdel(&answers);
	return 0;
}
