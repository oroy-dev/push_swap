/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstoarray.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:08:07 by oroy              #+#    #+#             */
/*   Updated: 2023/06/30 22:14:34 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	*lstoarray(int *arr, t_list *head, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		arr[i] = head->content;
		head = head->next;
		i++;
	}
	return (arr);
}
