#include "outils.h"

int ft_strlen(char *b)
{
    int i;
    i = 0;

    while (b[i])
        i++;
    return (i);
}