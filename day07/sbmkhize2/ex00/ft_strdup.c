/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 11:11:28 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/19 14:57:33 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		src_size;
	char	*new_str;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	new_str = (char*)malloc(sizeof(*new_str) * (src_size));
	if (new_str == NULL)
		return (NULL);
	while (i < src_size)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[src_size] = '\0';
	return (new_str);
}
