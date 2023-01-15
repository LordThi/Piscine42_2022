/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:39:10 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/27 13:35:52 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "en mousse";
	char	dest[] = "Le Petit Bonhomme ";
	char	src2[] = "";
	char	dest2[] = "";


	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", ft_strcat(dest, src2));
	printf("%s\n", ft_strcat(dest2, src));
	printf("%s\n", ft_strcat(dest2, src2));
	return (0);
}*/
