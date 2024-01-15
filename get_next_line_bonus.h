/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagomez <dagomez@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:33:53 by dagomez           #+#    #+#             */
/*   Updated: 2022/05/31 17:35:28 by dagomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *c);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *src, int c);

#endif
