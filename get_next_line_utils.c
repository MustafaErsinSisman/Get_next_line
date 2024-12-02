/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musisman <<musisman@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:55:39 by musisman          #+#    #+#             */
/*   Updated: 2024/12/02 14:41:52 by musisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s, char *buffer)
{
	char	*a;
	size_t	i;
	size_t	j;

	if (!s)
	{
		s = malloc(1);
		s[0]  = '\0';
	}
	a = malloc(ft_strlen(s) + ft_strlen(buffer) + 1);
	i = 0;
	c = 0;
	if (a == NULL)
		return (NULL);
	while (s[c])
	{
		a[c] = s[c];
		c++;
	}
	while (buffer[i])
		a[c++] = buffer[i++];
	res[ft_strlen(s) + ft_strlen(buffer)] = '\0';
	free(s);
	return (a);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}