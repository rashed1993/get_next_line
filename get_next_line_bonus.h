/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:03:19 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/08/03 19:31:47 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <limits.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

// # define BUFFER_SIZE 1000

char	*get_next_line(int fd);
char	*ft_strjoinb(char const *s1, char const *s2);
char	*ft_strchrb(const char *string, int searchedChar);

void	ft_bzerob(void *s, size_t n);
void	*ft_callocb(size_t elementCount, size_t elementSize);

size_t	ft_strlenb(const char *theString);

#endif