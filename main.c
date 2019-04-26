/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:29:23 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 13:57:37 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			main(int argc, char **argv)
{
	t_data	*data;

	if (!chek_if_valid(argv[1], argc))
		return (0);
	data = malloc(sizeof(t_data));
	data->mlx_ptr = mlx_init();
	data->win_ptr = mlx_new_window(data->mlx_ptr, 1000, 1000, "Fractol");
	init_data(argv[1], data);
	out_put_fractop(data);
	mlx_hook(data->win_ptr, 2, 5, track_key, data);
	mlx_mouse_hook(data->win_ptr, mouse_manage, data);
	mlx_hook(data->win_ptr, 6, 5, control_mouse_moving, data);
	mlx_loop(data->mlx_ptr);
	free(data);
	return (0);
}
