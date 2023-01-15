/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_possible_grids.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:22:25 by vmourtia          #+#    #+#             */
/*   Updated: 2022/03/20 21:01:35 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	**make_all_possible_lines(int n, int m);
int	**initialize_zeroes_grid(void);
int	**create_2d_array(int n, int m);
int	*initialize_loop_params_array(void);
int	verification_grid(int **grid, char *rules);
void	clear_grid(int **grid);

int	**make_grid_and_check_it(int **tab, int *params, char *rules)
{
	int	l;
	int	**grid;

	grid = initialize_zeroes_grid();
	l = 0;
	while (l < 24)
	{
		if (l != params[0] && l != params[1] && l != params[2])
		{
			grid[0] = tab[params[0]];
			grid[1] = tab[params[1]];
			grid[2] = tab[params[2]];
			grid[3] = tab[l];
			if (verification_grid(grid, rules))
				return (grid);
		}
		l++;
	}
	clear_grid(grid);
	return (NULL);
}

int	**arrangement(int **tab, int *params, char *rules)
{
	int	**grid;

	params[2] = 0;
	while (params[2] < 24)
	{
		if (params[2] != params[0] && params[2] != params[1])
		{
			grid = make_grid_and_check_it(tab, params, rules);
			if (grid)
				return (grid);
		}
		params[2]++;
	}
	return (NULL);
}

int	**check_all_possible_grids(int **all_possible_lines, char *rules)
{
	int	*loop_params;
	int	**zeroes;
	int	**grid;

	zeroes = initialize_zeroes_grid();
	loop_params = initialize_loop_params_array();
	while (loop_params[0] < 24)
	{
		loop_params[1] = 0;
		while (loop_params[1] < 24)
		{
			if (loop_params[1] != loop_params[0])
			{
				grid = arrangement(all_possible_lines, loop_params, rules);
				if (grid)
					return (grid);
			}
			loop_params[1]++;
		}
		loop_params[0]++;
	}
	return (zeroes);
}
