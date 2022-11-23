/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:52 by matavare          #+#    #+#             */
/*   Updated: 2022/11/23 17:11:27 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(long unsigned int ptr)
{
	long unsigned int	i;

	i = 2;
	if (!ptr)
		return (ft_putstr("(nil)"));
	write(1, "0x", 2);
	i += ft_ptrhex(ptr, "0123456789abcdef", 16);
	return (i);
}
