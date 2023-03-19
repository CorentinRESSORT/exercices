#include "outils.h"

void    ft_ex5(int a, int b, int c)
{
    if(a > b && a > c)
        ft_putstr(ft_itoa(a));
    if(b > a && b > c)
        ft_putstr(ft_itoa(b));
    if(c > a && c > b)
        ft_putstr(ft_itoa(c));
}