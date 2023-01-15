/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:00:42 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/31 17:16:37 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int arc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (arc)
	{
		while (i < arc)
		{
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i++;
			j = 0;
		}
	}
	return (0);
}
