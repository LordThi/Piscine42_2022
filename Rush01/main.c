/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 20:07:52 by vmourtia          #+#    #+#             */
/*   Updated: 2022/03/20 21:12:54 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	**check_all_possible_grids(int **all_possible_lines, char *rules);
int	**make_all_possible_lines(int n, int m);

int	main(int argc, char **argv)
{	
	(void) argc;
	int	**all_possible_lines;
	int	**result;
    int	i;
	int	j;
	
	i = 0;
	all_possible_lines = make_all_possible_lines(24, 4);
	result = check_all_possible_grids(all_possible_lines, argv[1]);
	printf("\n");
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			printf("%d ", result[i][j++]);
		printf("\n");
		i++;
	}
	return (0);
}
