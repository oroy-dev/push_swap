/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:20:10 by oroy              #+#    #+#             */
/*   Updated: 2023/06/26 16:40:07 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_parse(t_stack **stacks, int param, int *algo_do)
{
	t_list	*save;

	save = NULL;
	if (!(*stacks)->head_a)
	{
		(*stacks)->head_a = ft_lstnew(param, save);
		if (!(*stacks)->head_a)
			ft_error(stacks);
		(*stacks)->head_a->prev = (*stacks)->head_a;
	}
	else
	{
		if (ft_lstchr((*stacks)->head_a, param))
			ft_error(stacks);
		save = (*stacks)->head_a->prev;
		(*stacks)->head_a->prev = ft_lstnew(param, save);
		if (!(*stacks)->head_a->prev)
			ft_error(stacks);
		save->next = (*stacks)->head_a->prev;
		if (param < save->content)
			*algo_do = 1;
	}
}
