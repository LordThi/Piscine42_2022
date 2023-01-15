/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 01:31:18 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/26 14:54:37 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| ((str[i] >= 'a' && str[i] <= 'z'))))
			return (0);
		i++;
	}
	if (str[0] == '\0')
		return (1);
	else
		return (1);
}
/*
int	main(void)
{	
	char	*stralpha;
	char	*strnum;
	char	*stralphanum;
	char	*strtrap;

	stralpha = "boulgour";
	strnum = "123456";
	stralphanum = "kevindu56";
	strtrap = "[]a^]";
	printf("C'est %d, Yes we did it!\n", ft_str_is_alpha(stralpha));
	printf("C'est %d, emotional dammage!\n", ft_str_is_alpha(strnum));
	printf("C'est %d, c'est ciao.\n", ft_str_is_alpha(stralphanum));
	printf("%d, pour les pieges\n", ft_str_is_alpha(strtrap));
	return (0);
}*/
