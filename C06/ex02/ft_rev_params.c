/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:43:17 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/31 14:53:55 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int arc, char **arv)
{
	int	i;

	i = arc - 1;
	while (i > 0)
	{
		ft_putstr(arv[i]);
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
