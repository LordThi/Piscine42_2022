/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivigni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:58:02 by tlivigni          #+#    #+#             */
/*   Updated: 2022/03/31 17:05:44 by tlivigni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] != '\0' && str2[i] != '\0') && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

		temp = *a;
		*a = *b;
		*b = temp;
}

int	main(int arc, char **arg)
{
	int	i;
	int	j;

	i = 1;
	while (i < arc - 1)
	{
		j = 1;
		while (j < arc - 1)
		{
			if (ft_strcmp (arg[j], arg[j + 1]) > 0)
				ft_swap (&arg[j], &arg[j + 1]);
			j++;
		}
		i++;
	}
	j = 1;
	while (j < arc)
	{
		ft_putstr(arg[j]);
		write (1, "\n", 1);
		j++;
	}
	return (0);
}
