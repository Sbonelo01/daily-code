/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 05:33:00 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/25 14:28:18 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int			ft_list_size(t_list **begin_list)
{
	int		i;
	t_list	*tmp;

	if (begin_list == NULL)
		return (0);
	i = 0;
	tmp = *begin_list;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i + 1);
}
