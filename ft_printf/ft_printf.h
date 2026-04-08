#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int     ft_printf_p(void *p);
int     ft_printf_s(char *s);
int     ft_putchar(char c);
int     ft_putnbr_16(int flag, unsigned long n);
int     ft_putnbr(int nb);
int     ft_putnbr_unsigned(unsigned int nb);
int     ft_putstr(char *str);

int     ft_printf(const char *format, ...);

#endif
