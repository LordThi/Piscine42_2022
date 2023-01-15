/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:24:42 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/22 21:53:57 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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

	strnum = "118218";
	strlow = "jesuistranquille";
	strup = "JESUISVENERE";
	stralnum = "interstella5555";
	strmixed = "JeSuIsInGeNiEuRiNfOrMaTiCiEn";
	printf("Les chiffres c'est %d.\n", ft_str_is_lowercase(strnum));
	printf("Petites lettres c'est %d.\n", ft_str_is_lowercase(strlow));
	printf("TU T'ENERVES DIDER %d/20.\n", ft_str_is_lowercase(strup));
	printf("ch1ffreLettre:%d.\n", ft_str_is_lowercase(stralnum));
	printf("%d PoUr LeS KiKoUs.\n", ft_str_is_lowercase(strmixed));
	return (0);
}*/
