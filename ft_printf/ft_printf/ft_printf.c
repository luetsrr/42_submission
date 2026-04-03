#include "ft_printf.h"

static int  ft_formats(va_list *args, const char format)
{
    int count;

    count = 0;
    if (format == 'c')
        count += ft_putchar(va_arg(*args, int));
    else if (format == 's')
        count += ft_printf_s(va_arg(*args, char *));
    else if (format == 'p')
        count += ft_printf_p(va_arg(*args, void *));
    else if (format == 'd' || format == 'i')
        count += ft_putnbr(va_arg(*args, int));
    else if (format == 'u')
        count += ft_putnbr_unsigned(va_arg(*args, unsigned int));
    else if (format == 'x')
        count += ft_putnbr_16(0, va_arg(*args, unsigned int));
    else if (format == 'X')
        count += ft_putnbr_16(1, va_arg(*args, unsigned int));
    else if (format == '%')
    {
        write(1, "%", 1);
        count++;
    }
    return (count);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int     i;
    int     count;

    i = 0;
    count = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (!format[i])
                break ;
            count += ft_formats(&args, format[i]);
        }
        else
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (count);
}