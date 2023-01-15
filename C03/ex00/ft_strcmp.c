/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:45:01 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/29 12:44:13 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char **argv)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Helaw";
	char	s4[] = "\0";

	(void) argv;
	(void) argc;
	printf ("je ne sais pas quoi faire de cet argument ; %d\n", argc);
	printf ("Pour S1 = s2 c'est 0 : %d.\n", ft_strcmp(s1, s2));
	printf (" pour S1 != S3 c'est: %d.\n", ft_strcmp(s1, s3));
	printf (" pour debut == b0 c'est: %d.\n", ft_strcmp(s4, s3));
	printf (" pour fin == b0 c'est: %d.\n", ft_strcmp(s1, s4));
	return (0);
}*/
