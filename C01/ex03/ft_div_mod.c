/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:12:42 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/18 13:23:41 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b ;
}
/*
#include <stdio.h>
int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(5, 2, &div, &mod); 
	printf("le produit de la division est %d, ", div);
	printf("le modulo de la division est %d", mod);
	return(0);
}*/
