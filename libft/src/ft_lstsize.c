/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:08:08 by oroy              #+#    #+#             */
/*   Updated: 2023/06/29 21:01:15 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_lstsize(t_list *lst)
{
	t_list	*head;
	size_t	i;

	if (!lst)
		return (0);
	i = 1;
	head = lst;
	while (lst->next != head)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
