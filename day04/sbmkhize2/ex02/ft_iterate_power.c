/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterate_power.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 12:42:17 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/16 07:54:29 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int temp;

	i = 1;
	temp = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power != 1)
		return (nb);
	while (i != power)
	{
		nb = nb * temp;
		i++;
	}
	return (nb);
}
