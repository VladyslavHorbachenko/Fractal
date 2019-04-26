/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_moving.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:59:20 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 15:02:41 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		change_size(t_data *data, int key)
{
	if (key == 43)
		data->change_side--;
	else
		data->change_side++;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	out_put_fractop(data);
}

void		right(t_data *data)
{
	data->change_x = data->change_x - 0.01;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	out_put_fractop(data);
}

void		left(t_data *data)
{
	data->change_x = data->change_x + 0.01;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	out_put_fractop(data);
}

void		up(t_data *data)
{
	data->change_y = data->change_y + 0.01;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	out_put_fractop(data);
}

void		down(t_data *data)
{
	data->change_y = data->change_y - 0.01;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	out_put_fractop(data);
}
