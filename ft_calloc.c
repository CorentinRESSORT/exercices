#include "outils.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *calloc;

    if (!(calloc = malloc(nmemb * size)))
            return (NULL);
    if (nmemb == 0 || size == 0)
            return (NULL);
     ft_memset(calloc, 0, nmemb * size);
    return (calloc);
}