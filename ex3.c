#include "ex.h"

static  int     isdigit(int a)
{
    int i;

    i = 0;
    if((a > 64 && a < 91) || (a > 96 && a < 123))
        i = 1;
    return (i);
}

static  int     isletter(int a)
{
    int i;

    i = 0;
    if(a > 47 && a < 58)
        i = 1;
    return (i);
}

static  int     count_hexa(int a)
{
    int i;

    i = 0;
    while (a > 10)
    {
        a /= 10;
        i++;
    }
    return (i);
}
static  void    print_hexa(int a)
{
    char hex[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char *s;
    int i;

    i = count_hexa(a);
    s = ft_calloc(i + 1, sizeof(char));
    while(i)
        {
            s[i] = hex[a % 16];
            a /= 16;
            i--;
        }
    s[i] = hex[a];
    write(1, s, ft_strlen(s));
    free(s);
}
void    ft_ex3(void)
{
    int i;
    char *s;

    i = 0;
    while(i < 123)
    {
        if (isdigit(i) || isletter(i))
        {
            s = ft_itoa(i);
            write(1, "caractère =", 12);
            write(1, &i, 1);
            write(1, " code =", 7);
            write(1, s, ft_strlen(s));
            write(1, " code hexa =", 12);
            print_hexa(i);
            write(1,"\n", 1);
            free(s);
        }
        i++;
    }
}