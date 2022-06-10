/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:12:39 by ftuncer           #+#    #+#             */
/*   Updated: 2021/10/07 18:17:07 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[b] != '\0')
		b++;
	if (size != 0)
	{
		size -= 1;
		while (src[a] != '\0' && (a < size))
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (b);
}
