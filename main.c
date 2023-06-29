/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:18:48 by oroy              #+#    #+#             */
/*   Updated: 2023/06/28 20:06:12 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stacks;
	size_t	count;

	if (argc > 1)
	{
		count = 0;
		stacks = stacknew();
		if (!stacks)
			ft_error(&stacks);
		if (checkargs(&stacks, argv, &count))
		{
			stacks->head_a->prev->next = stacks->head_a;
			if (count <= 5)
				basic_sort(&stacks, count);
			else
				chunk_sort(&stacks, count);
		}
	}
	return (0);
}
