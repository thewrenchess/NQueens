/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nq_writetofile.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 11:24:49 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/18 10:55:36 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/nqueens.h"

void		nq_writetofile(t_list *answers) {
	int		fd;
	int		i;
	char	*separator;

	if ((fd = open(	"Solution.txt",
					O_RDWR | O_CREAT | O_TRUNC,
					S_IRUSR | S_IWUSR)) < 0) {
		printf("Failed to create file\nExiting...\n");
		return ;
	}
	separator = strdup("----------\n");
	for (i = 0; answers->board; i++) {
		if ((write(fd, answers->board, 73)) < 0)
			ERROR
		answers = answers->next;
		if (answers->board) {
			if((write(fd, separator, 12)) < 0)
				ERROR
		}
	}
	ft_strdel(&separator);
	close(fd);
	printf("\n%d solution found. Check 'Solution.txt' for result\n\n", i);
}
