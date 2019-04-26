/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <vlahorba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 13:58:40 by vlahorba          #+#    #+#             */
/*   Updated: 2019/04/23 15:01:28 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include "mlx.h"
# include "math.h"
# include "libft.h"
# include <sys/stat.h>
# include <fcntl.h>
# include "stdlib.h"
# include "time.h"

typedef struct			s_data
{
	void				*mlx_ptr;
	void				*win_ptr;
	double				min_r_num;
	double				max_real_number;
	double				minimal_imagine;
	double				maxima;
	int					w_width;
	int					w_height;
	int					m_y;
	double				i_real_ch;
	double				i_im_cha;
	double				vert[3][3];
	int					random;
	double				side;
	int					change_side;
	char				*fractol_name;
	int					iterations_max;
	int					x;
	int					y;
	double				int_real;
	double				int_imagine;
	double				change_x;
	double				change_y;
	int					color;
	double				zoom;
	int					m_x;
}						t_data;

void					zoom(int x, int y, t_data *data);
int						mouse_manage(int mousecode, int x, int y, t_data *data);
double					interpolate(double start,
		double end, double interpolation);
int						control_mouse_moving(int x, int y, t_data *data);
void					out_put_julia(t_data *data);
void					init_julia(t_data *data);
double					calc_real_julia(t_data *data);
double					calc_imagine_julia(t_data *data);
int						calc_num_julia(t_data *data);
void					out_put_fractop(t_data *data);
void					out_put_chaos(t_data *data);
void					init_chaos(t_data *data);
void					continue_count_chaos(t_data *data);
void					change_size(t_data *data, int key);
void					mouse_search(int mousecode,
		int x, int y, t_data *data);
void					init_data(char *s, t_data *data);
int						chek_if_valid(char *s, int argc);
void					init_mandelbrot(t_data *data);
double					calc_real(t_data *data);
double					calc_imagine(t_data *data);
int						calc_num_mandelbrot(t_data *data);
void					out_put_mandelbrot(t_data *data);
int						track_key(int key, t_data *data);
void					down(t_data *data);
void					up(t_data *data);
void					left(t_data *data);
void					right(t_data *data);
void					set_color(t_data *data, int key);

#endif
