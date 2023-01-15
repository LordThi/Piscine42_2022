/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:25:23 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/19 11:34:19 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod (&a, &b);
	printf("le produit de la division est %d \n", a);
	printf("le produit du modulo est %d. \n", b);
}*/
