/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicdos-s <vicdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 15:15:47 by vicdos-s          #+#    #+#             */
/*   Updated: 2026/06/22 11:19:43 by vicdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int print_base (unsigned long n, char *base, unsigned long b_len)
{
	int	count;

	count = 0;
	if (n > b_len)
		count += print_base(n / b_len, base, b_len);
	count += write(1, &base[n % b_len], 1);
	return (count);
}

int print_hex_lc (va_list *args)
{
	return(print_base(va_arg(*args, unsigned int), "0123456789abcdef", 16));
}

int print_hex_uc (va_list *args)
{
	return(print_base(va_arg(*args, unsigned int), "0123456789ABCDEF", 16));
}

