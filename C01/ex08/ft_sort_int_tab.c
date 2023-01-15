/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:49:27 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/30 21:32:13 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i <= size - 1)
	{
		j = i + 1;
		if (tab[i] < tab[j])
			i++;
		if (tab[i] > tab[j])
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
		}
		i = 0;
	}
	return;
}

int	main(void)
{
	int	tab[5];
	int	size;
	int	i;

	tab[0] = 8;
	tab[1] = 9;
	tab[2] = 3;
	tab[3] = 1;
	tab[4] = 6;
	tab[5] = 2;
	size = 6;
	i = 0;
	while (i <= size - 1)
	{
		ft_sort_int_tab(tab, size);
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
// V1 probleme compilation
// v2 probleme core ; Boucle infinie?
// v3 bon ordre mais non prise en compte i=0
// v4 prise en compte i=0 mais boucle infinie sur i0
// v5 complie mais ne se lance pas (ajout valeur j)
