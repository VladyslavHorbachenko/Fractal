/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:59:05 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 14:56:02 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double		calc_real(t_data *data)
{
	double res;
	double diff;

	diff = data->max_real_number - data->min_r_num;
	res = (data->x * (diff / data->w_width) + data->min_r_num);
	return (res);
}

double		calc_imagine(t_data *data)
{
	double res;
	double diff;

	diff = data->maxima - data->minimal_imagine;
	res = (data->y * (diff / data->w_height) + data->minimal_imagine);
	return (res);
}

int			calc_num_mandelbrot(t_data *data)
{
	int			i;
	double		z_real;
	double		z_imagine;
	double		temp;

	i = 0;
	z_real = 0.0;
	z_imagine = 0.0;
	while (i < data->iterations_max && z_real *
			z_real + z_imagine * z_imagine < 4.0)
	{
		temp = z_real * z_real - z_imagine *
			z_imagine + data->int_real + data->change_x;
		z_imagine = 2.0 * z_real * z_imagine +
			data->int_imagine + data->change_y;
		z_real = temp;
		i++;
	}
	return (i);
}
