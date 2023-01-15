/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 22:27:58 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/24 22:19:28 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{	
		if (!(str[i] >= ' ' && str[i] <= 126))
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
	char	*strnonimp;

	strnum = "118218";
	strlow = "jesuistranquille";
	strnonimp = "\n";
	printf("Les chiffres c'est %d.\n", ft_str_is_printable(strnum));
	printf("Petites lettres c'est %d.\n", ft_str_is_printable(strlow));
	printf("On voit rien %d\n", ft_str_is_printable(strnonimp));
	return (0);
}*/
