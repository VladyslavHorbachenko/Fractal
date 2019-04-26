/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_fractol.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:48:38 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 14:50:47 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			chek_if_valid(char *s, int argc)
{
	if (argc < 2 || argc > 2)
	{
		write(1, "Usage: ./fractol [name_of_fractol]\n", 35);
		return (0);
	}
	if ((ft_strcmp(s, "mandelbrot") != 0) &&
			(ft_strcmp(s, "julia") != 0) && (ft_strcmp(s, "chaos") != 0))
	{
		write(1, "wrong =(\n", 10);
		write(1, "-> mandelbrot\n", 14);
		write(1, "-> julia\n", 9);
		write(1, "-> chaos\n", 9);
		return (0);
	}
	return (1);
}
