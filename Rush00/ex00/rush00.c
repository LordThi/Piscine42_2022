/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:02:32 by eedy              #+#    #+#             */
/*   Updated: 2022/03/13 18:23:02 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush_abscissa(int x);
void	rush_ordinate(int x, int y);
void	rush_void(int x);
void	rush_print_middle(int x);

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		ft_putchar ('o');
		rush_abscissa(x);
		ft_putchar('\n');
		if (y > 1)
		{
			i = y - 2;
			while (i > 0)
			{
				rush_print_middle(x);
				i --;
			}
			ft_putchar('o');
			if (x > 1)
			{
				rush_abscissa(x);
			}
			ft_putchar('\n');
		}
	}
}

void	rush_abscissa(int x)
{
	int	i;

	i = x - 2;
	while (i > 0)
	{
		ft_putchar('-');
		i --;
	}
	if (x > 1)
		ft_putchar('o');
}

void	rush_void(int x)
{
	int	i;

	i = x - 1;
	while (i > 1)
	{
		ft_putchar(' ');
		i --;
	}
}

void	rush_print_middle(int x)
{
	ft_putchar('|');
	if (x > 1)
	{
		rush_void(x);
		ft_putchar('|');
	}
	ft_putchar('\n');
}
