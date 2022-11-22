/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_uc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:15:31 by matavare          #+#    #+#             */
/*   Updated: 2022/11/21 18:15:50 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printhex_lc(int nbr)
{
	int	temp;

	temp = nbr / 16;
	if (temp > 0)
	{
		ft_printhex_lc(nbr / 16);
		if ((nbr % 16) < 10)
			nbr = nbr % 16 + 48;
		else
			nbr = nbr % 16 + 55;
		write(1, &nbr, 1);
	}
	else
	{
		if (nbr < 10)
			temp = nbr + 48;
		else
			temp = nbr + 55;
		write(1, &temp, 1);
	}
}

/* int	main(void)
{
	ft_printhex_lc(256876543);
} */
