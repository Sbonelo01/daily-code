/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:12:56 by sbmkhize          #+#    #+#             */
/*   Updated: 2018/04/19 18:16:48 by sbmkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		hour2;
	char	hourm;
	char	hour2m;

	hourm = 'A';
	hour2m = 'A';
	if (hour >= 12)
	{
		hour = hour - 12;
		hourm = 'P';
		if (hour == 0)
			hour = 12;
	}
	hour2 = hour + 1;
	if (hour2 >= 12)
	{
		hour2 = hour2 - 12;
		hour2m = 'P';
		if (hour2 == 0)
			hour2 = 12;
	}
	printf("%s%i%s%c%s%i%s%c%s\n", "THE FOLLOWING TAKES PLACE BETWEEEN "
			, hour, ".00 ", hourm, ".M. AND ", hour2, ".00 ", hour2m, ".M.");
}

void	ft_takes_place(int hour)
{
	if (hour > 24 || hour < 0)
		printf("%s", "Invalid time");
	else
	{
		ft_print_takes_place(hour);
	}
}
