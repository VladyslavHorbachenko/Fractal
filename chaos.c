/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chaos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:57:20 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 15:02:47 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "time.h"

void		continue_count_chaos(t_data *data)
{
	int i;

	i = 0;
	while (i < data->iterations_max)
	{
		data->random = rand() % 3;
		data->max_real_number = (data->max_real_number +
								data->vert[data->random][0]) / 2;
		data->min_r_num = (data->min_r_num +
								data->vert[data->random][1]) / 2;
		mlx_pixel_put(data->mlx_ptr, data->win_ptr,
				data->max_real_number, data->min_r_num, data->color);
		i++;
	}
}
