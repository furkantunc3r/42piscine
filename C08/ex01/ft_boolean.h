/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftuncer <furkan_tuncer@yahoo.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:12:02 by ftuncer           #+#    #+#             */
/*   Updated: 2021/10/20 18:37:01 by ftuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE	1
# define FALSE	0
# define SUCCESS	0
# define EVEN(nbr)	((nbr % 2) == 0 ? TRUE : FALSE)
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"

typedef int	t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
