/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 14:03:48 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/20 14:21:08 by vlahorba         ###   ########.fr       */
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
	draw_fractol(data);
}

int track_key(int key,t_data *data)
{
    if(key == 53)
        exit(0);
    else if (key == 43 || key == 47)
		change_size(data, key);
    return(0);

}

int			main(int argc, char **argv)
{

	if(argc == 0)
;
	t_data	*data;


	data = malloc(sizeof(t_data));
	data->mlx_ptr = mlx_init();
	data->win_ptr = mlx_new_window(data->mlx_ptr, 1000, 1000, "Fractol");
	init_data(argv[1], data);
	draw_fractol(data);
    mlx_hook(data->win_ptr, 2, 5, track_key, data);
	mlx_loop(data->mlx_ptr);
	free(data);
	return (0);
}