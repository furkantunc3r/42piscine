/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:26:23 by ftuncer           #+#    #+#             */
/*   Updated: 2021/10/14 14:56:57 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		j;
	int		k;
	char	*swap;

	j = 0;
	while (++j < argc - 1)
	{
		k = j;
		while (++k <= argc - 1)
		{
			if (ft_strcmp(argv[j], argv[k]) > 0)
			{
				swap = argv[j];
				argv[j] = argv[k];
				argv[k] = swap;
			}
		}
	}
	j = 0;
	while (++j <= argc - 1)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
	}
	return (0);
}
