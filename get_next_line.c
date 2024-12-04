/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musisman <musisman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:52:44 by musisman          #+#    #+#             */
/*   Updated: 2024/11/26 17:03:15 by musisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_bufferstr(int fd, char *s)
{
  char *buffer;
  int b;
  
  buffer = malloc(BUFFER_SIZE + 1);
  if (!buffer)
    return (NULL);
  b = 1;
  while (ft_strchr(s, '\n') == 0 && b != 0)
  {
    b = read(fd, buffer, BUFFER_SIZE);
    if (i == -1)
    {
      free(buffer);
      free(s);
      return (NULL);
    }
  buffer[i] = '\0';
  s = ft_strjoin(s, buffer);
  }
  free(buffer);
  return (s);
}

char	*get_next_line(int fd)
{
  static char * s ;
  char * ptr;

  if ( fd < 0 && BUFFER_SIZE < 1 )
      return (NULL);
  s = ft_bufferstr(fd, s); // anlaşıldı ama detaylı bak yine
  if( !s)
  return (NULL);
  ptr = line_s(s);
  s = ft_new(s);
  return (ptr);
}
