/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 08:02:32 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/20 08:02:47 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int i;
	int max;

	i = 0;
	max = 0;
	while (i < n)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}