/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:56:10 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/28 19:11:18 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	meuledefoin[] = "J la saucisse de blablabla";
	char	aiguille[] = "saucisse";
	char	esp[] = " ";
	char	null[] = "\0";


	printf ("%s\n", ft_strstr(meuledefoin, aiguille));
	printf ("%s\n", ft_strstr(meuledefoin, esp));
	printf ("%s\n", ft_strstr(meuledefoin, null));
	return (0);
}*/
