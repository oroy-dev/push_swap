/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 19:36:35 by oroy              #+#    #+#             */
/*   Updated: 2023/06/29 22:37:59 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort3(t_stack **stacks)
{
	if (((*stacks)->head_a->prev->content > (*stacks)->head_a->content
		&& (*stacks)->head_a->content > (*stacks)->head_a->next->content))
		sa(stacks);
	// 2 1 3
	else if ((*stacks)->head_a->content > (*stacks)->head_a->next->content
		&& (*stacks)->head_a->next->content > (*stacks)->head_a->prev->content)
	{
		sa(stacks);
		rra(stacks);
	}
	// 3 2 1
	else if (((*stacks)->head_a->content > (*stacks)->head_a->prev->content
		&& (*stacks)->head_a->prev->content > (*stacks)->head_a->next->content))
		ra(stacks);
	// 3 1 2
	else if ((*stacks)->head_a->next->content > (*stacks)->head_a->content
		&& (*stacks)->head_a->content > (*stacks)->head_a->prev->content)
		rra(stacks);
	// 2 3 1
	else if ((*stacks)->head_a->next->content > (*stacks)->head_a->prev->content
		&& (*stacks)->head_a->prev->content > (*stacks)->head_a->content)
	{
		rra(stacks);
		sa(stacks);
	}
	// 1 3 2
}

void	basic_sort(t_stack **stacks, size_t count)
{
	if (count == 2)
		sa(stacks);
	else
	{
		while (count != 3)
		{
			pb(stacks);
			count--;
		}
		sort3(stacks);
		b_to_a(stacks);
	}
}
