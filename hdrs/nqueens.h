/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nqueens.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yherrera <yherrera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 13:18:55 by yherrera          #+#    #+#             */
/*   Updated: 2017/05/18 10:53:39 by yherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NQUEENS_H
# define NQUEENS_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

# define USAGE printf("USAGE: ./nqueens <integer between 1 and 8>\n")
# define ERROR {printf("Failed to write to file\nExiting...\n"); return ;}

typedef struct		s_list
{
	char			*board;
	struct s_list	*next;
}					t_list;

t_list				*nq_getsolution(const int n);
t_list				*nq_newlist(void);
char				*nq_newboard(void);
char				*nq_deepcopyboard(char *src);
void				ft_strdel(char **as);
void				nq_writetofile(t_list *answers);
void				nq_listdel(t_list **lst);

#endif
