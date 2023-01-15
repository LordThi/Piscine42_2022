/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:08:27 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/29 13:35:53 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	if (n > -2147483648 && n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(-42);
	return(0);
}*/
