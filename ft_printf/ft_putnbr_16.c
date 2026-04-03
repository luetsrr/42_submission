#include "ft_printf.h"

int ft_putnbr_16(int flag, unsigned long n)
{
    int     count;
    char    *base;

    count = 0;
    if (flag == 0)
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";
    if (n >= 16)
        count += ft_putnbr_16(flag, n / 16);
    count += write(1, &base[n % 16], 1);
    return (count);
}