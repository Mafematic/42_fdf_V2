/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fszendzi <fszendzi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:55:45 by fszendzi          #+#    #+#             */
/*   Updated: 2023/09/25 14:55:47 by fszendzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"
#include "../includes/fdf_bonus.h"

void	apply_zoom(t_prog_data *data, float scale_factor)
{
	int		i;
	int		j;
	t_pixel	*cur_pixel;

	i = 0;
	while (i < data->rows)
	{
		j = 0;
		while (j < data->cols)
		{
			cur_pixel = data->grid[i][j];
			cur_pixel->iso_x *= scale_factor;
			cur_pixel->iso_y *= scale_factor;
			j++;
		}
		i++;
	}
}
