/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:22:49 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 15:05:24 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		zoom(int mouse_reality, int mouse_imagine, t_data *data)
{
	double interpolation;

	interpolation = 1.0 / data->zoom;
	data->min_r_num = interpolate(mouse_reality,
										data->min_r_num, interpolation);
	data->minimal_imagine = interpolate(mouse_imagine,
										data->minimal_imagine, interpolation);
	data->max_real_number = interpolate(mouse_reality,
										data->max_real_number, interpolation);
	data->maxima = interpolate(mouse_imagine,
										data->maxima, interpolation);
}
