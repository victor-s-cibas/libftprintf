/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicdos-s <vicdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:52:17 by vicdos-s          #+#    #+#             */
/*   Updated: 2026/06/22 13:42:20 by vicdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "stdio.h"

int main (void)
{
	// int dec = -255;
	// unsigned int hex = dec;
 	// unsigned int *teste = 0123;
	
	ft_printf("Minha Printf: %X %s \n", 123, "testando isso");
	printf("Função original: %X %s", 123, "testando isso");
	
	// printf("teste %c", teste);
	return (0);
}
// 364 / 16 = 1 , RESTO 3
// 0123456789ABCDEF FA ffffff01%