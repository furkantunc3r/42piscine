/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:25:46 by ftuncer           #+#    #+#             */
/*   Updated: 2021/10/13 15:20:51 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;
	int	i;

	i = 1;
	num = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while ((nb - i) > 0)
	{
		num = num * (nb - i);
		i++;
	}
	return (num);
}
