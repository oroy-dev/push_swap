/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:33:51 by oroy              #+#    #+#             */
/*   Updated: 2023/07/04 13:09:49 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	t_list	*position;

	if (!lst || !f)
		return ;
	position = lst;
	while (position)
	{
		f(position->content);
		position = position->next;
	}
}
