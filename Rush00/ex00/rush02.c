/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:40:27 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/13 20:42:06 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);
void	rush_abscissa_top(int x);
void	rush_abscissa_down(int x);
void	rush_ordinate(int x, int y);
void	rush_print_middle(int x);

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		rush_abscissa_top(x);
		ft_putchar('\n');
		if (y > 1)
		{
			i = y - 2;
			while (i > 0)
			{
				rush_print_middle(x);
				i --;
			}
			if (x > 1)
			{
				rush_abscissa_down(x);
			}
			ft_putchar('\n');
		}
	}
}

void	rush_abscissa_top(int x)
{
	int	i;

	i = x - 2;
	ft_putchar ('A');
	if (x > 1)
	{
		while (i > 0)
		{
			ft_putchar('B');
			i --;
		}
		ft_putchar('A');
	}
}

void	rush_print_middle(int x)
{
	int	i;

	ft_putchar('B');
	if (x > 1)
	{
		i = x - 1;
		while (i > 1)
		{
			ft_putchar(' ');
			i --;
		}
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void	rush_abscissa_down(int x)
{
	int	i;

	i = x - 2;
	ft_putchar ('C');
	if (x > 1)
	{
		while (i > 0)
		{
			ft_putchar('B');
			i --;
		}
		ft_putchar('C');
	}
}
