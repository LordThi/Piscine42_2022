/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:59:10 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/24 22:02:46 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	strmax[] = "YESSAYERASTAFARA";
	char	strmixed [] = "KiKoOlOl";
	printf("%s\n", ft_strlowcase(strmax));
	printf("%s", ft_strlowcase(strmixed));
	return (0);
}*/
