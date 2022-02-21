/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmargene <mmargene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:23:35 by mmargene          #+#    #+#             */
/*   Updated: 2022/02/22 02:24:14 by mmargene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

size_t	ft_strlen(char *s);
char	*ft_strjoin (char *s1, char *s2, int f);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup_n(char *buf, int b_read);
int		ft_strchrINT(const char *s, int c);
char	*ft_free(char *one, char *two, char *three);
char	*get_next_line(int fd);

#endif
