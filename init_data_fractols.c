/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data_fractols.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:39:59 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 14:52:32 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		init_data(char *s, t_data *data)
{
	data->fractol_name = s;
	data->w_width = 900;
	data->w_height = 900;
	data->change_x = 0;
	data->change_y = 0;
	data->color = 0x460a18;
	data->zoom = 1;
	data->min_r_num = -2.03;
	data->minimal_imagine = -1.2;
	data->max_real_number = 1.1;
	data->maxima = 1.1;
	data->m_x = 0;
	data->m_y = 0;
	data->i_real_ch = 0;
	data->i_im_cha = 0;
	data->side = 0;
}

void		init_chaos(t_data *data)
{
	int i;

	data->side = 300.0 + data->change_side;
	data->iterations_max = 10000;
	i = 0;
	while (i < 3)
	{
		data->vert[i][0] = data->w_height / 2 +
			data->side * cos(i * 2 * M_PI / 3);
		data->vert[i][1] = data->w_height / 2 +
			data->side * sin(i * 2 * M_PI / 3);
		mlx_pixel_put(data->mlx_ptr, data->win_ptr,
				data->vert[i][0], data->vert[i][1], data->color);
		i++;
	}
}

void		init_mandelbrot(t_data *data)
{
	data->iterations_max = 256;
	data->x = 100;
	data->y = 100;
}

void		init_julia(t_data *data)
{
	data->int_real = -0.7 + data->i_real_ch;
	data->int_imagine = 0.27015 + data->i_im_cha;
	data->iterations_max = 250;
	data->x = 100;
	data->y = 100;
}
