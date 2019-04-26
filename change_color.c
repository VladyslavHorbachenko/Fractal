/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:20:27 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 14:19:13 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void		set_color(t_data *data, int key)
{
	if (key == 12)
		data->color = 0x460a18;
	if (key == 13)
		data->color = 0xafaf0a;
	if (key == 11)
		data->color = 0x008d23;
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	out_put_fractop(data);
}
