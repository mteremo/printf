/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:02:42 by matavare          #+#    #+#             */
/*   Updated: 2022/11/23 17:09:06 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrhex(long unsigned int nbr, char *a_base, unsigned int base)
{
	long unsigned int	temp;
	long unsigned int	i;

	i = 0;
	temp = nbr / base;
	if (temp > 0)
	{
		i += ft_ptrhex(nbr / base, a_base, base);
		nbr = nbr % base;
	}
	i += ft_putchar(a_base[nbr]);
	return (i);
}
