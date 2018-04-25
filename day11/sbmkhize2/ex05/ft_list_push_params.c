/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 05:36:42 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/25 14:29:58 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int size, char **args)
{
	int		i;
	t_list	*tmp;
	t_list	*elem;
	t_list	*first;

	i = size;
	while (i != 0)
	{
		elem = ft_create_elem(args[i]);
		if (i == size)
			first = elem;
		if (i != 1)
			elem->next = tmp;
		tmp = elem;
		i--;
	}
	return (first);
}
