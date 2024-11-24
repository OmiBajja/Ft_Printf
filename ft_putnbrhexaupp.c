/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:32:50 by obajja            #+#    #+#             */
/*   Updated: 2024/11/14 18:32:49 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c);

void	ft_putnbrhexaupp(int n)
{
	char *tab;

	tab = "0123456789ABCDEF";
	if (n == -2147483648)
	{
		write(1, "-80000000", 9);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n >= 16)
		ft_putnbrhexaupp(n / 16);
	ft_putchar(tab[(int)n % 16]);
}
/*
#include <fcntl.h>

int	main(void)
{
	int c = -30;
	ft_putnbrhexaupp(c);
	return (0);
}*/