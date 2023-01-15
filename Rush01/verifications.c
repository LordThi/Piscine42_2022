/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifications.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:24:46 by vmourtia          #+#    #+#             */
/*   Updated: 2022/03/20 21:12:22 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int verification_one_rightrow(int *row, char *rule);
int verification_one_leftrow(int *row, char rule);
int verification_leftrows(int **grid, char *rules, int i);
int verification_rightrows(int **grid, char *rules, int i);
int verification_coldown(int **grid, char rule,  int i);
int verification_colup(int **grid, char rule, int i);

int	verification_grid(int **grid, char *rules)
{
	int	i;
	
	i = 0;
	while (rules[i])
	{
		if (0 <= i && i <= 3)
		{
			if (!(verification_colup(grid, rules[i], i)))
				return (0);
		}
		else if (4 <= i && i <= 7)
		{
			if (!(verification_coldown(grid, rules[i], i % 4)))
				return (0);
		}
		else if (8 <= i && i <= 11)
		{
			if (!(verification_leftrows(grid, rules, i)))
				return (0);
		}
		else
		{
			if (!(verification_rightrows(grid, rules, i)))
				return (0);
		}
		i++;
	}
	return (1);
}
