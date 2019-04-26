/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fractols.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:29:55 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 14:16:35 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		out_put_fractop(t_data *data)
{
	if (ft_strcmp(data->fractol_name, "mandelbrot") == 0)
		out_put_mandelbrot(data);
	if (ft_strcmp(data->fractol_name, "julia") == 0)
		out_put_julia(data);
	if (ft_strcmp(data->fractol_name, "chaos") == 0)
		out_put_chaos(data);
}
