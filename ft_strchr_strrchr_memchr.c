/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_strrchr_memchr.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:12:14 by zleullie          #+#    #+#             */
/*   Updated: 2026/05/16 23:30:58 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
		return (s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;

	if (c == 0)
		return (s + ft_strlen(s));
	last_occurrence = 0;
	while (*s)
	{
		if (*s == c)
			last_occurrence = (char *)s;
		s++;
	}
	return (last_occurrence);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	*chk;
	size_t			index;

	chk = (unsigned char)c;
	arr = (unsigned char *)s;
	while (n--)
	{
		if (*arr == chk)
			return (arr);
		arr++;
	}
	return (0);
}
