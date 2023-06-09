/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:25:33 by oroy              #+#    #+#             */
/*   Updated: 2023/06/30 22:13:23 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
		slen = 0;
	else
		slen -= start;
	if (slen > len)
		slen = len;
	dst = ft_calloc(slen + 1, sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
