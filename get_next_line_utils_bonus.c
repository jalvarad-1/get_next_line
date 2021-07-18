/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvarad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:29:46 by jalvarad          #+#    #+#             */
/*   Updated: 2021/06/08 16:32:10 by jalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == dst)
		return (dst);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((char)c == *s)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		a;
	int		len;
	char	*aux_s1;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	n = 0;
	a = 0;
	aux_s1 = malloc(sizeof(char) * len + 1);
	if (!aux_s1)
		return (0);
	ft_memcpy(aux_s1, s1, ft_strlen(s1) + 1);
	while (aux_s1[a] != '\0')
		a++;
	while (s2[n] != '\0')
	{
		aux_s1[a + n] = s2[n];
		n++;
	}
	aux_s1[a + n] = '\0';
	return (aux_s1);
}

char	*ft_strdup(const char *s1)
{
	char	*aux_s1;

	aux_s1 = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!aux_s1)
		return (0);
	ft_memcpy(aux_s1, s1, ft_strlen(s1));
	aux_s1[ft_strlen(s1)] = 0;
	return (aux_s1);
}
