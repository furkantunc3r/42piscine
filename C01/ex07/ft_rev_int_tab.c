/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:25:03 by ftuncer           #+#    #+#             */
/*   Updated: 2021/10/06 15:43:51 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	size--;
	while (i < size)
	{
		j = tab[i];
		tab[i] = tab[size];
		tab[size] = j;
		i++;
		size--;
	}
}
