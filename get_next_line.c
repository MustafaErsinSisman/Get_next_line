/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musisman <musisman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:52:44 by musisman          #+#    #+#             */
/*   Updated: 2024/12/09 17:49:01 by musisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_buffer_s(int fd, char *s)
{
	char	*buffer;
	int		b;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	b = 1;
	while (ft_strchr(s, '\n') == 0 && b != 0)
	{
		b = read(fd, buffer, BUFFER_SIZE);
		if (b == -1)
		{
			free(buffer);
			free(s);
			return (NULL);
		}
		buffer[b] = '\0';
		s = ft_strjoin(s, buffer);
	}
	free(buffer);
	return (s);
}

char	*get_next_line(int fd)
{
	static char	*s ;
	char		*ptr;

	if (fd < 0 && BUFFER_SIZE < 1)
		return (NULL);
	s = ft_buffer_s(fd, s);
	if (!s)
		return (NULL);
	ptr = ft_line_s(s);
	s = ft_new_line_s(s);
	return (ptr);
}
