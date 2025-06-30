#include "libft.h"
/**
 * Retorna 1 se o caractere for um dígito (0-9), 0 caso contrário.
 * Faz cast seguro para unsigned char para evitar comportamento indefinido.
 * para facilitar a legibilidade evitei os numeros da tabela ASCII
 * (48 - 57)
 */
int	ft_isdigit(int c)
{
	unsigned char	uc;

	if (c == -1)
		return (0);
	uc = (unsigned char)c;
	return (uc >= '0' && uc <= '9');
}
