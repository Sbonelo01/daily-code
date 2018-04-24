/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 09:19:19 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/16 12:46:24 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	if (nb < 3)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	ft_recursive_factorial(5);
	return (0);
}
