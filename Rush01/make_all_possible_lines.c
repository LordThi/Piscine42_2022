/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_all_possible_lines.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 09:43:42 by vmourtia          #+#    #+#             */
/*   Updated: 2022/03/20 17:37:56 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**create_2d_array(int n, int m);
int	*initialize_loop_params_array(void);

void	assignation(int **tab, int *params, int *a, int *m)
{
	int	l;

	l = 0;
	while (l < *m)
	{
		if (l != params[0] && l != params[1] && l != params[2])
		{
			tab[*a][0] = params[0] + 1;
			tab[*a][1] = params[1] + 1;
			tab[*a][2] = params[2] + 1;
			tab[*a][3] = l + 1;
		}
		l++;
	}
}

void	permutation_level_k(int **tab, int *params, int *a, int *m)
{
	params[2] = 0;
	while (params[2] < *m)
	{
		if (params[2] != params[0] && params[2] != params[1])
		{
			assignation(tab, params, a, m);
			(*a)++;
		}
		params[2]++;
	}
}

int	**make_all_possible_lines(int n, int m)
{
	int	**all_permutations;
	int	*loop_params;
	int	a;

	all_permutations = create_2d_array(n, m);
	loop_params = initialize_loop_params_array();
	a = 0;
	while (loop_params[0] < m)
	{
		loop_params[1] = 0;
		while (loop_params[1] < m)
		{
			if (loop_params[1] != loop_params[0])
				permutation_level_k(all_permutations, loop_params, &a, &m);
			loop_params[1]++;
		}
		loop_params[0]++;
	}
	return (all_permutations);
}
