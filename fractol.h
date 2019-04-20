/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 13:28:18 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/20 14:16:34 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
#define FRACTOL_H
#include "minilibx_macos/mlx.h"
#include "math.h"
#include "libft/libft.h"
#include <sys/stat.h>
#include <fcntl.h>
#include "stdlib.h"

typedef struct s_data
{
 int        max_iterations;
 int        itetation;
 int        x;
 int        y;
 void       *mlx_ptr;
 void       *win_ptr;
 double     maxreal;
 double     minreal;
 int        w_width;
 double     maximagine;
 double     minimagine;
 int        w_height;
 double     int_real;
 double     change_x;
 double     int_imagine;
 double     change_y;
 int        color;
 char				*name_of_fractol;
 double				zoom;
 int					mouse_x;
 int					mouse_y;
 double				int_real_change;
 double				int_imagine_change;
 int					change_side;
 int key;
}   t_data;

int         track_key(int key,t_data *data);
void		init_data(char *s, t_data *data);
int			main(int argc, char **argv);
void		draw_fractol(t_data *data);
void		draw_mandelbrot(t_data *data);
int			calc_num_mandelbrot(t_data *data);
double		calc_imagine(t_data *data);
double		calc_real(t_data *data);
void		init_mandelbrot(t_data *data);
void		change_size(t_data *data, int key);




#endif