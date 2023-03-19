#include "outils.h"

void    ft_ex1(int a, int b)
{
    char *s;

    s = ft_itoa(a*b);
    ft_putstr(s);
    free(s);
}  