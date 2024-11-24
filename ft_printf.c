#include "libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void ft_sender(char s,va_list lst)
{
	if (s == 'c')	
		ft_putchar((char)va_arg(lst,int));
	if (s == 's')
		ft_putstr(va_arg(lst,char*));
	if (s == 'p')
		ft_printadress(va_arg(lst,void *));
	if (s == 'd')
		ft_putnbr(va_arg(lst,int));
	if (s == 'i')
		ft_putnbr(va_arg(lst,int));
	if (s == 'u')
		ft_putnbr(va_arg(lst,int));
	if (s == 'x')
		ft_putnbrhexalow(va_arg(lst,unsigned int));
	if (s == 'X')
		ft_putnbrhexaupp(va_arg(lst,unsigned int));
	if (s == '%')
		ft_putchar('%');
}
int ft_printf(const char *str, ...)
{
	int i;

	i = 0;
	va_list lst;
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			ft_sender(str[i + 1],lst);
			i += 2;
		}
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			i++;
		}	
	}
	va_end(lst);
}

#include <stdio.h>
int	main()
{
	char	b;

	b = 's';
	ft_printf("\n%p",&b);
	printf("\n%p",&b);
	return (0);
}