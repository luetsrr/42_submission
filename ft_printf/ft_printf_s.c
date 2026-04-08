#include "ft_printf.h"

int    ft_printf_s(char *s)
{
    if (!s)
    {
        write(1, "(null)", 6);
        return (6);
    }
    return (ft_putstr(s));
}