/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 23:55:47 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/20 01:39:19 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*if_in_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		if_same(char *src, char *find, int powers)
{
	int i;
	int j;
	int find_size;

	i = 0;
	j = 0;
	find_size = 0;
	while (find[find_size] != '\0')
		find_size++;
	while (src[i] != '\0' && find[j] != '\0')
	{
		if (src[i] == find[j] || (powers == 1 && j == 0 && find[j] == 'P'))
		{
			i++;
			j++;
			if (j == find_size)
				return (1);
		}
		else if (src[i] == ' ')
			i++;
		else
			return (0);
	}
	return (0);
}

int		main(int size, char **args)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (if_same(if_in_lowercase(args[i]), "president", 0) ||
			if_same(if_in_lowercase(args[i]), "attack", 0) ||
				if_same(args[i], "Powers", 1))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
