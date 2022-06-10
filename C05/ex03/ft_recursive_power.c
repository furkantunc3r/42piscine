/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:41:16 by ftuncer           #+#    #+#             */
/*   Updated: 2021/10/12 20:16:22 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	num;

	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		power--;
		num = nb * ft_recursive_power(nb, power);
		return (num);
	}
}
