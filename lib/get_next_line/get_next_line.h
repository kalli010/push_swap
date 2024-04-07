/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:03:10 by zelkalai          #+#    #+#             */
/*   Updated: 2024/02/15 16:40:44 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
void				list_maker(t_list **list, int fd);
void				add_to_list(t_list **list, char *buf);
char				*get_the_line(t_list *list);
void				clist(t_list **list);
void				dealloc(t_list **list, t_list *clean_node, char *buf);
void				copy_the_list(t_list *list, char *the_line);
int					llist(t_list *list);
int					newline_checker(t_list *list);

#endif
