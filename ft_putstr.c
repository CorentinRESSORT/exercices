#include "outils.h"

void ft_putstr(char *s)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(s);
    while (i < len)
        ft_putchar(s[i++]);
    ft_putchar('\n');
}