#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_putstr(char *s)
{
    int i = 0;

    if (!s)
        return ft_putstr("(null)");
    while (s[i])
        i+= ft_putchar(s[i++]);
    return i;
}