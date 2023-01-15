/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:48:53 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/17 14:21:36 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	nb1;
	char	nb2;

	nb1 = 0;
	while (nb1 <= 99)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putchar (nb1 / 10 + 48);
			ft_putchar (nb1 % 10 + 48);
			ft_putchar (' ');
			ft_putchar (nb2 / 10 + 48);
			ft_putchar (nb2 % 10 + 48);
			++nb2;
			if (nb1 != 98)
			{
				write (1, ", ", 2);
			}
		}
		++nb1;
	}
}
