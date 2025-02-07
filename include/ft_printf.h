/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obajja <obajja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:15:39 by obajja            #+#    #+#             */
/*   Updated: 2024/11/27 17:06:28 by obajja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../Libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printadress(unsigned long ptr);
int	ft_putchar_pf(char c);
int	ft_putstr_pf(char *s);
int	ft_putnbr_upf(unsigned int n, int *count);
int	ft_putnbr_pf(int n, int *count);
int	ft_putnbrhexalow(unsigned int n, int *count);
int	ft_putnbrhexaupp(unsigned int n, int *count);

#endif
