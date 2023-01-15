/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:45:52 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/27 16:52:26 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	a;

	a = nb;
	if (a < 0)
	{
		ft_putchar ('-');
		a *= -1;
	}
	if (a >= 0 && a < 9)
		ft_putchar (a + '0');
	if (a > 9)
	{
		ft_putnbr (a / 10);
		ft_putnbr (a % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483648);
		return(0);
}*/
