/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 05:38:54 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/25 14:30:38 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;

	if (begin_list == NULL)
		return ;
	while (tmp != NULL)
	{
		tmp = *begin_list;
		*begin_list = *begin_list->next;
		free(tmp);
	}
}
