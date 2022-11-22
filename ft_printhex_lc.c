/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_lc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:02:42 by matavare          #+#    #+#             */
/*   Updated: 2022/11/22 18:27:38 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex_lc(long unsigned int nbr)
{
	long unsigned int	temp;
	long int			i;

	i = 0;
	temp = nbr / 16;
	if (temp > 0)
	{
		i += ft_printhex_lc(nbr / 16);
		if ((nbr % 16) < 10)
			nbr = nbr % 16 + 48;
		else
			nbr = nbr % 16 + 87;
		i += write(1, &nbr, 1);
	}
	else
	{
		if (nbr < 10)
			temp = nbr + 48;
		else
			temp = nbr + 87;
		i += write(1, &temp, 1);
	}
	return (i);
}

/* int	main(void)
{
	ft_printhex_lc(256876543);
} */
