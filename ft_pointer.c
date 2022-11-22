/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:52 by matavare          #+#    #+#             */
/*   Updated: 2022/11/22 16:34:08 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(long unsigned int ptr)
{
	int	i;

	i = 2;
	if (!ptr)
		return (ft_putstr("(nil)"));
	write(1, "0x", 2);
	i += ft_printhex_lc(ptr);
	return (i);
}

/* int	main(void)
{
	int	a = 5;
	int	*ptr = &a;

	ft_pointer(ptr);
}
 */