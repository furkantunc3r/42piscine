/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:25:55 by ftuncer           #+#    #+#             */
/*   Updated: 2021/10/12 18:40:07 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	i = 1;
	num = nb;
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		num = num * nb;
		i++;
	}
	return (num);
}
