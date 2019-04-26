/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:29:14 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 15:01:30 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			track_key(int key, t_data *data)
{
	if (key == 53)
		exit(0);
	else if (key == 124)
		right(data);
	else if (key == 123)
		left(data);
	else if (key == 126)
		up(data);
	else if (key == 125)
		down(data);
	else if (key == 43 || key == 47)
		change_size(data, key);
	else if (key == 13 || key == 11 || key == 15)
		set_color(data, key);
	return (0);
}
