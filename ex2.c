#include "ex.h"

void ft_ex2(int a, int b)
{
    int conv;
    char *sa;
    char *sb;

    sa = ft_itoa(a);
    sb = ft_itoa(b);

    ft_putstr("Avant Conversion :");
    ft_putstr(sa);
    ft_putstr(sb);

    free(sa);
    free(sb);
    
    conv = a;
    a = b;
    b = conv;

    ft_putstr("Après Conversion :");
    sa = ft_itoa(a);
    sb = ft_itoa(b);

    ft_putstr(sa);
    ft_putstr(sb);

    free(sa);
    free(sb);
}