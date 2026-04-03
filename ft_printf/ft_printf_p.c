#include "ft_printf.h"

int    ft_printf_p(void *p)
{
    unsigned long   n;

    n = 0;
    if (!p)
    {
        write(1, "(nil)", 5);
        return (5);
    }
    write(1, "0x", 2);
    n = (unsigned long)p;
    return(2 + ft_putnbr_16(0, n));
}