/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:32:37 by obajja            #+#    #+#             */
/*   Updated: 2024/11/25 17:17:51 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_pf(char c)
{
	write(1, &c, 1);
	return (1);
}
/*
#include <fcntl.h>

int	main(void)
{
	char c = 'f';
	int fd = open("test", O_RDWR);
	if (fd == -1)
		return (1);
	ft_putchar_fd(c, fd);
	return (0);
}*/