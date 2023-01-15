/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:05:01 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/30 13:17:40 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned int	n = 3;
	char	*s1 = "k1";
	char	*s2 = "k81";
	char	*s3 = "k97421";

	printf("Oh Yeah: %d.\n", ft_strncmp(s1, s2, n));
	printf("Oh no: %d.\n", strncmp(s1, s2, n));
	return (0);
}*/
