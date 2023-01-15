/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:11:58 by vmourtia          #+#    #+#             */
/*   Updated: 2022/03/20 20:00:46 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**create_2d_array(int n, int m)
{
	int	**tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * 2 * n);
	while (i < n)
		tab[i++] = malloc(sizeof(int) * m);
	return (tab);
}

int	*initialize_loop_params_array(void)
{
	int	*params;

	params = malloc(sizeof(int) * 3);
	params[0] = 0;
	params[1] = 0;
	params[2] = 0;
	return (params);
}

int	**initialize_zeroes_grid(void)
{
	int	**grid;
	int	i;
	int	j;

	grid = create_2d_array(4, 4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			grid[i][j++] = 0;
		i++;
	}
	return (grid);
}	
