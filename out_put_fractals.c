/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out_put_fractals.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 14:06:34 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 15:09:16 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		out_put_julia(t_data *data)
{
	int num;

	init_julia(data);
	while (data->y < data->w_height)
	{
		while (data->x < data->w_width)
		{
			data->max_real_number = calc_real_julia(data);
			data->maxima = calc_imagine_julia(data);
			num = calc_num_julia(data);
			if (num < data->iterations_max)
				mlx_pixel_put(data->mlx_ptr, data->win_ptr,
						data->x, data->y, data->color * num);
			data->x = data->x + 1;
		}
		data->x = 100;
		data->y = data->y + 1;
	}
}

void		out_put_chaos(t_data *data)
{
	time_t	t;

	init_chaos(data);
	srand((unsigned)time(&t));
	data->max_real_number = rand() % (int)(data->vert[0][0] / 2
			+ (data->vert[1][0] + data->vert[2][0]) / 4);
	data->min_r_num = rand() % (int)(data->vert[0][1] / 2
			+ (data->vert[1][1] + data->vert[2][1]) / 4);
	mlx_pixel_put(data->mlx_ptr, data->win_ptr,
			data->max_real_number, data->min_r_num, data->color);
	continue_count_chaos(data);
}

void		out_put_mandelbrot(t_data *data)
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
			if (num < data->iterations_max)
				mlx_pixel_put(data->mlx_ptr, data->win_ptr,
						data->x, data->y, data->color * num);
			data->y = data->y + 1;
		}
		data->y = 100;
		data->x = data->x + 1;
	}
}
