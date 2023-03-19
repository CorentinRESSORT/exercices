#include "outils.h"

void    ft_memset(void *s, int c, int size)
{
    int i;
    char *str;
    i = 0;

    str = s;
    while (i < size)
        str[i++] = c;
}