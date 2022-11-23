/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:15:31 by matavare          #+#    #+#             */
/*   Updated: 2022/11/23 17:12:24 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbr_base(unsigned int nbr, char *a_base, unsigned int base)
{
	unsigned int	temp;
	unsigned int	i;

	i = 0;
	temp = nbr / base;
	if (temp > 0)
	{
		i += ft_nbr_base(nbr / base, a_base, base);
		nbr = nbr % base;
	}
	i += ft_putchar(a_base[nbr]);
	return (i);
}
