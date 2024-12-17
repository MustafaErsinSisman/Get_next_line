/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musisman <<musisman@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:52:44 by musisman          #+#    #+#             */
/*   Updated: 2024/12/17 12:22:33 by musisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	check(int b, char *s, char *buffer)
{
	if (b == -1)
	{
		free(buffer);
		free(s);
		return (0);
	}
	else if (b == 0)
	{
		if (!s || s[0] == '\0')
		{
			free(buffer);
			free(s);
			return (0);
		}
	}
	return (1);
}

char	*ft_bufferstr(int fd, char *s)
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
		if (!check(b, s, buffer))
			return (NULL);
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
	s = ft_bufferstr(fd, s);
	if (!s)
		return (NULL);
	ptr = line_s(s);
	s = ft_new(s);
	return (ptr);
}
