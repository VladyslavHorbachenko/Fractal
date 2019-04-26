/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpotale.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:20:13 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/22 19:20:53 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double		interpolate(double start, double end, double interpolation)
{
	return (start + ((end - start) * interpolation));
}
