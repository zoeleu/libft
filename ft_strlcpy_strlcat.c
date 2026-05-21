/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_strlcat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zleullie <zleullie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 17:55:32 by zleullie          #+#    #+#             */
/*   Updated: 2026/05/16 19:53:20 by zleullie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (index < (size - 1) && src[index])
	{
		dst[index] = src[index];
		index++;
	}
	if (size > 0)
	{
		dst[index] = 0;
	}
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		src_length;
	size_t		dst_length;
	char		*d;
	size_t		n;

	src_length = ft_strlen(src);
	n = size;
	d = dst;
	while (n-- != 0 && *d != '\0')
		d++;
	dst_length = d - dst;
	n = size - dst_length;
	if (n == 0)
		return (dst_length + src_length);
	while (*src)
	{
		if (n != 1)
		{
			*d++ = *src;
			n--;
		}
		src++;
	}
	*d = 0;
	return (dst_length + src_length);
}
