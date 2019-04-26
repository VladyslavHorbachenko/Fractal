/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:57:30 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 15:02:45 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double		calc_real_julia(t_data *data)
{
	double res;

	res = 1.5 * (data->x - data->w_width / 2) /
		(0.5 * data->zoom * data->w_width) + data->change_x;
	return (res);
}

double		calc_imagine_julia(t_data *data)
{
	double res;

	res = (data->y - data->w_height / 2) /
		(0.5 * data->zoom * data->w_height) + data->change_y;
	return (res);
}

int			calc_num_julia(t_data *data)
{
	int i;

	i = 0;
	while (i < data->iterations_max && data->max_real_number *
										data->max_real_number +
			data->maxima * data->maxima < 4.0)
	{
		data->min_r_num = data->max_real_number;
		data->minimal_imagine = data->maxima;
		data->max_real_number = data->min_r_num * data->min_r_num -
			data->minimal_imagine * data->minimal_imagine + data->int_real;
		data->maxima = 2 * data->min_r_num *
			data->minimal_imagine + data->int_imagine;
		i++;
	}
	return (i);
}
