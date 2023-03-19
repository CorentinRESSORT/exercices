#include "outils.h"

static	int		count_nb(long n)
{
	int i;

	if (n >= 10)
		i = 1;
	else
		return (1);
	return (i + count_nb(n / 10));
}

static	void	do_itoa(char *str, int nbn, long nb, int pos)
{
	while (nbn)
	{
		str[--nbn] = (nb % 10) + 48;
		nb /= 10;
		if (nbn == 0 && pos < 0)
			str[nbn] = 45;
	}
}

char			*ft_itoa(int n)
{
	char	*str;
	int		nbn;
	int		pos;
	long	nb;

	nb = (long)n;
	pos = 0;
	nbn = 0;
	if (nb < 0)
	{
		nbn++;
		pos--;
		nb = -nb;
	}
	nbn += count_nb(nb);
	if (!(str = malloc(sizeof(char) * (nbn + 1))))
		return (0);
	str[nbn] = '\0';
	do_itoa(str, nbn, nb, pos);
	return (str);
}