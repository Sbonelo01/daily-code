#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbmkhize <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/18 12:16:49 by sbmkhize          #+#    #+#              #
#    Updated: 2018/04/18 12:16:49 by sbmkhize         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -o ft_putchar.c
gcc -o ft_swap.c
gcc -o ft_putstr.c
gcc -o st_strlen.c
gcc -o ft_strcmp.c

ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
