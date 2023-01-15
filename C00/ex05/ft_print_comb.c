/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:04:07 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/17 14:17:24 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	units;
	char	tens;
	char	hundreds;

	hundreds = '0';
	while (hundreds <= '9')
	{
		tens = hundreds + 1;
		while (tens <= '9')
		{
			units = tens + 1;
			while (units <= '9')
			{
				write (1, &hundreds, 1);
				write (1, &tens, 1);
				write (1, &units, 1);
				++units;
				if (hundreds != '7')
					write (1, ", ", 2);
			}
			++tens;
		}
		++hundreds;
	}
}
