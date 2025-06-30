#include "libft.h"
/**
 * ft_itoa - Converte um inteiro para uma string.
 * @n: Inteiro a ser convertido.
 * Retorna uma string representando o inteiro.
 * Retorna NULL em caso de falha de alocação.
 * Números negativos são suportados.
 */
static size_t	ft_intlen(int n)
{
	size_t	len;
	long	num;

	len = 0;
	num = n;

	if (num <= 0)
	{
		len = 1;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	long	num;

	len = ft_intlen(n);
	num = n;
	if (n == 0)
		return (ft_strdup("0"));
	str = ((char *)malloc(len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
