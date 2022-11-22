/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:52 by matavare          #+#    #+#             */
/*   Updated: 2022/11/21 19:02:40 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_pointer(long unsigned int ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	write(1, "0x", 2);
	ft_printhex_lc(ptr);
}

int	main(void)
{
	int	ptr = 5;

	ft_pointer(ptr);
}
