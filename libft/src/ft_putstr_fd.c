/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:19:50 by oroy              #+#    #+#             */
/*   Updated: 2023/06/30 22:13:23 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write (fd, s, ft_strlen(s));
}
