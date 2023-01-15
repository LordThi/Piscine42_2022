/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 01:54:40 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/21 14:33:54 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tempswap;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{	
		tempswap = tab [i];
		tab[i] = tab [j];
		tab[j] = tempswap;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int	tab[4];
	int	i;
	int	size;

	tab[0] = 5;
	tab[1] = 9;
	tab[2] = 6;
	tab[3] = 7;
	tab[4] = 2;
	size = 5;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i <= size - 1)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
