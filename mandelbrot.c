/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 13:23:00 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/20 14:16:37 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "fractol.h"

void		init_mandelbrot(t_data *data)
{
	data->max_iterations = 150;
	data->x = 100;
	data->y = 100;
}

double		calc_real(t_data *data)
{
	double res;
	double diff;

	diff = data->maxreal - data->minreal;
	res = (data->x * (diff / data->w_width) + data->minreal);
	return (res);
}

double		calc_imagine(t_data *data)
{
	double res;
	double diff;

	diff = data->maximagine - data->minimagine;
	res = (data->y * (diff / data->w_height) + data->minimagine);
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
	while (i < data->max_iterations && z_real *
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

void		draw_mandelbrot(t_data *data)
{
	int num;

	init_mandelbrot(data);
	while (data->x < data->w_width)
	{
		while (data->y < data->w_height)
		{
			data->int_real = calc_real(data);
			data->int_imagine = calc_imagine(data);
			num = calc_num_mandelbrot(data);
			if (num < data->max_iterations)
				mlx_pixel_put(data->mlx_ptr, data->win_ptr,
						data->x, data->y, data->color * num);
			data->y++;
		}
		data->y = 100;
		data->x++;
	}
}
void		init_data(char *s, t_data *data)
{
	data->name_of_fractol = s;
	data->w_width = 1000;
	data->w_height = 1000;
	data->change_x = 0;
	data->change_y = 0;
	data->color = 0x003366;
	data->zoom = 1;
	data->minreal = -2.05;
	data->minimagine = -1.3;
	data->maxreal = 1.2;
	data->maximagine = 1.2;
	data->mouse_x = 0;
	data->mouse_y = 0;
	data->int_real_change = 0;
	data->int_imagine_change = 0;
	data->change_side = 0;
}


void		draw_fractol(t_data *data)
{
		draw_mandelbrot(data);
}


