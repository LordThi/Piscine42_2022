/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 20:51:06 by vmourtia          #+#    #+#             */
/*   Updated: 2022/03/20 22:13:34 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verification_one_rightrow(int *row, char rule)
{
	if (rule == '1')
	{
		if (!(row[3] == 4))
			return (0);
		else
			return (1);
	}
	else if (rule == '2')
	{
		if (((row[2] == 4) && (row[3] == 3 || row[0] == 4) && \
			 (row[3] == 3 || row[1] == 4)))
			return (0);
		else
			return (1);
	}
	else if (rule == '3')
	{
		if (((row[1] == 4 || row[3] < row[2]) && \
			 (row[3] == 2 || row[2] == 1 || row[1] == 3) && \
			 (row[3] == 1 || row[2] == 3 || row[1] == 2)))
			return (0);
		else
			return (1);
	}
	else
	{
		if ((row[3] == 1 || row[2] == 2 || row[1] == 3))
			return (0);
		else
			return (1);
	}
	return (0);
}

int	verification_one_leftrow(int *row, char rule)
{
	if (rule == '1')
	{
		if (!(row[0] == 4))
			return (0);
		else
			return (1);
	}
	else if (rule == '2')
	{
		if (((row[1] == 4) && (row[0] == 3 || row[3] == 4) \
			 && (row[0] == 3 || row[2] == 4)))
			return (0);
		else
			return (1);
	}
	else if (rule == '3')
	{
		if (((row[2] == 4 || row[0] < row[1]) && \
			 (row[0] == 2 || row[1] == 1 || row[2] == 3) && \
			 (row[0] == 1 || row[1] == 3 || row[2] == 2)))
			return (0);
		else
			return (1);
	}
	else
	{
		if ((row[0] == 1 || row[1] == 2 || row[2] == 3))
			return (0);
		else
			return (1);
	}
	return (0);
}

int	verification_leftrows(int **grid, char *rules, int i)
{
	if (i == 8)
	{
		if (!(verification_one_leftrow(grid[0], rules[i])))
			return (0);
		else
			return (1);
	}
	else if (i == 9)
	{
		if (!(verification_one_leftrow(grid[1], rules[i])))
			return (0);
		else
			return (1);
	}
	else if (i == 10)
	{
		if (!(verification_one_leftrow(grid[2], rules[i])))
			return (0);
		else
			return (1);
	}
	else
	{
		if (!(verification_one_leftrow(grid[3], rules[i])))
			return (0);
		else
			return (1);
	}
	return (0);
}

int	verification_rightrows(int **grid, char *rules, int i)
{
	if (i == 12)
	{
		if (!(verification_one_rightrow(grid[0], rules[i])))
			return (0);
		else
			return (1);
	}
	else if (i == 13)
	{
		if (!(verification_one_rightrow(grid[1], rules[i])))
			return (0);
		else
			return (1);
	}
	else if (i == 14)
	{
		if (!(verification_one_rightrow(grid[2], rules[i])))
			return (0);
		else
			return (1);
	}
	else
	{
		if (!(verification_one_rightrow(grid[3], rules[i])))
			return (0);
		else
			return (1);
	}
	return (0);
}

int	verification_coldown(int **grid, char rule, int i)
{
	if (rule == '1')
	{
		if (!(grid[3][i] == 4))
			return (0);
		else
			return (1);
	}
	else if (rule == '2')
	{
		if (((grid[2][i] == 4) && (grid[3][i] == 3 || grid[0][i] == 4) \
			 && (grid[3][i] == 3 || grid[1][i] == 4)))
			return (0);
		else
			return (1);
	}
	else if (rule == '3')
	{
		if (((grid[1][i] == 4 || grid[3][i] < grid[2][i]) \
			 && (grid[3][i] == 2 || grid[2][i] == 1 || grid[1][i] == 3) \
			 && (grid[3][i] == 1 || grid[2][i] == 3 || grid[1][i] == 2)))
			return (0);
		else
			return (1);
	}
	else
	{
		if ((grid[3][i] == 1 || grid[2][i] == 2 || grid[1][i] == 3))
			return (0);
		else
			return (1);
	}
	return (0);
}

int	verification_colup(int **grid, char rule, int i)
{
	if (rule == '1')
	{
		if (!(grid[0][i] == 4))
			return (0);
		else
			return (1);
	}
	else if (rule == '2')
	{
		if (((grid[1][i] == 4) && \
			 (grid[0][i] == 3 && grid[3][i] == 4) && \
			 (grid[0][i] == 3 && grid[2][i] == 4)))
			return (0);
		else
			return (1);
	}
	else if (rule == '3')
	{
		if (((grid[2][i] == 4 || grid[0][i] < grid[1][i]) \
			 && (grid[0][i] == 2 || grid[1][i] == 1 || grid[2][i] == 3) \
			 && (grid[0][i] == 1 || grid[1][i] == 3 || grid[2][i] == 2)))
			return (0);
		else
			return (1);
	}
	else
	{
		if ((grid[0][i] == 1 || grid[1][i] == 2 || grid[2][i] == 3))
			return (0);
		else
			return (1);
	}
	return (0);
}
