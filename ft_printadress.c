/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:43:08 by obajja            #+#    #+#             */
/*   Updated: 2024/11/18 16:44:08 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c);

void	ft_putptradd(unsigned long n)
{
	char *tab;

	tab = "0123456789abcdef";
	if (n >= 16)
		ft_putptradd(n / 16);
	ft_putchar(tab[n % 16]);
}

void	ft_printadress(void * ptr)
{
	ft_putstr("0x");
	ft_putptradd((unsigned long)ptr);
}
/*
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int c = -68;
	char f = 's';
	ft_printadress((unsigned long)&f);
	printf("\n%p",(void *)&f);
	return (0);
}*/