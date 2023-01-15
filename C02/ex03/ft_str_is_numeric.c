/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:33:43 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/22 21:54:48 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*strnum;
	char	*stralpha;
	char	*stralphanum;

	strnum = "1337";
	stralpha = "CelineDion";
	stralphanum = "75Chirac75";
	printf("C'est %d donc c'est cool.\n", ft_str_is_numeric(strnum));
	printf("Oups %d, prochaine fois.\n", ft_str_is_numeric(stralpha));
	printf("Malin mais c'est %d.\n", ft_str_is_numeric(stralphanum));
	return (0);
}*/
