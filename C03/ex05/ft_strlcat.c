/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 01:14:23 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/30 13:04:34 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lensrc;
	unsigned int	lendest;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	lendest = j;
	lensrc = ft_strlen(src);
	if (size == 0 || size <= lendest)
		return (size + lendest);
	while (src[i] != '\0' && i < size - lendest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lensrc + lendest);
}
/*
int	main(void)
{
	char	src[] = "hey ";
	char	dest[] = "macarena macarena";
	int	size = 5;

	printf ("%d\n", ft_strlcat(src, dest, size));
	return (0);
}*/
