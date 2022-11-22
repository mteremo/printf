/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_uc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:15:31 by matavare          #+#    #+#             */
/*   Updated: 2022/11/22 18:40:12 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_uc(long unsigned int nbr, int base)
{
	long unsigned int	temp;
	long int			i;

	i = 0;
	temp = nbr / base;
	if (temp > 0)
	{
		i += ft_putnbr_base_uc(nbr / base, base);
		if ((nbr % base) < 10)
			nbr = nbr % base + 48;
		else
			nbr = nbr % base + 55;
		i += write(1, &nbr, 1);
	}
	else
	{
		if (nbr < 10)
			temp = nbr + 48;
		else
			temp = nbr + 55;
		i += write(1, &temp, 1);
	}
	return (i);
}

/* int	main(void)
{
	int	i;

	i = ft_printhex_uc(256876543);
	printf("\n%d\n", i);
}
 */