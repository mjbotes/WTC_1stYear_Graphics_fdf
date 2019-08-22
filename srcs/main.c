/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <mbotes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:02:48 by mbotes            #+#    #+#             */
/*   Updated: 2019/08/21 13:36:04 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fdf.h"

int		main(int ac, char **av)
{
	t_env	env;
	t_point	*p;
	int		fd;

	env.mlx_ptr = mlx_init();
	env.w_ptr = mlx_new_window(env.mlx_ptr, 1000, 1000, "FDF");
	fd = open(av[ac - 1], O_RDONLY);
	p = ft_init(fd, env);
	ft_rotate_x(p);
	ft_draw_links(env, p);
	mlx_hook(env.w_ptr, 17, 0, fdf_exit, &env);
	mlx_hook(env.w_ptr, 2, 0, fdf_key, &env);
	mlx_loop(env.mlx_ptr);
	
}
