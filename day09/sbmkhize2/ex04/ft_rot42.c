/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 19:10:22 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/20 07:42:38 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rot42(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (j < 42)
		{
			return(str[i], str[i] + 1, str[i] + 2);
			if (str[i] + 1 > '~')
				str[i] = ' ';
			str[i] = str[i] + 1;
			j++;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char	*str;

	str = "aaaaaaaaaa";
	return(ft_rot42(str));
}
