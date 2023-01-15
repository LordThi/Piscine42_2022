/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:51:35 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/22 22:11:04 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*strnum;
	char	*strlow;
	char	*strup;
	char	*stralnum;
	char	*strmixed;

	strnum = "987789";
	strlow = "jedorme";
	strup = "TROPDECAFE";
	stralnum = "interstella5555";
	strmixed = "JeSuIsInGeNiEuRiNfOrMaTiCiEn";
	printf("Les chiffres c'est %d.\n", ft_str_is_uppercase(strnum));
	printf("Petites lettres c'est %d.\n", ft_str_is_uppercase(strlow));
	printf("YES! Numero %d.\n", ft_str_is_uppercase(strup));
	printf("ch1ffreLettre:%d.\n", ft_str_is_uppercase(stralnum));
	printf("%d PoUr LeS KiKoUs.\n", ft_str_is_uppercase(strmixed));
	return (0);
}*/
