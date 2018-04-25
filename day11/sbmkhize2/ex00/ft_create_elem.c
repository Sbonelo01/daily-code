/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 05:26:39 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/25 14:25:37 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list		*elem;

	elem = (t_list*)malloc(sizeof(elem));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}
