/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicdos-s <vicdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:44:04 by vicdos-s          #+#    #+#             */
/*   Updated: 2026/06/22 11:19:59 by vicdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>

int print_char (va_list *args);
int ft_printf(const char* format, ...);
int print_str (va_list *args);
int print_pct(va_list *args);
int print_hex_lc (va_list *args);
int print_base (unsigned long n, char *base, unsigned long b_len);
int print_hex_uc (va_list *args);

#endif