/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:44:36 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 14:54:39 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			control_mouse_moving(int x, int y, t_data *data)
{
	if ((x < 900 && x > 0) && (y < 900 && y > 0))
	{
		if (x > data->m_x)
			data->i_real_ch += 0.02;
		else
			data->i_real_ch -= 0.02;
		if (y > data->m_y)
			data->i_im_cha += 0.002;
		else
			data->i_im_cha -= 0.002;
	}
	data->m_x = x;
	data->m_y = y;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	out_put_fractop(data);
	return (0);
}

void		mouse_search(int number_code_of_mouse, int x, int y, t_data *data)
{
	double mouse_re;
	double mouse_im;

	mouse_re = (double)x / (data->w_width / (data->max_real_number -
											data->min_r_num))
	+ data->min_r_num;
	mouse_im = (double)y / (data->w_height / (data->maxima
	- data->minimal_imagine)) + data->minimal_imagine;
	if (number_code_of_mouse == 1 || number_code_of_mouse == 5)
	{
		data->zoom = 1.06;
		zoom(mouse_re, mouse_im, data);
	}
	else if (number_code_of_mouse == 2 || number_code_of_mouse == 4)
	{
		data->zoom = 1.0 / 1.06;
		zoom(mouse_re, mouse_im, data);
	}
}

int			mouse_manage(int number_code_of_mouse, int x, int y, t_data *data)
{
	if (ft_strcmp(data->fractol_name, "mandelbrot") == 0)
	{
		mouse_search(number_code_of_mouse, x, y, data);
	}
	else if (ft_strcmp(data->fractol_name, "julia") == 0)
	{
		if (number_code_of_mouse == 1 || number_code_of_mouse == 5)
			data->zoom = data->zoom * 1.06;
		else if (number_code_of_mouse == 2 || number_code_of_mouse == 4)
			data->zoom = data->zoom / 1.06;
	}
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	out_put_fractop(data);
	return (0);
}
