/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:08:38 by matavare          #+#    #+#             */
/*   Updated: 2022/12/08 17:11:58 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_pointer(long unsigned int ptr);
int	ft_ptrhex(long unsigned int nbr, char *a_base, unsigned int base);
int	ft_nbr_base(unsigned int nbr, char *a_base, unsigned int base);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);

#endif