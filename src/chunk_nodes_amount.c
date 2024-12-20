/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_nodes_amount.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:22:37 by oroy              #+#    #+#             */
/*   Updated: 2023/07/04 19:42:33 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

size_t	chunk_nodes_amount(size_t count)
{
	if (count > 100)
		return (count / 100 + 21);
	else
		return (count / 10 + 1);
}
