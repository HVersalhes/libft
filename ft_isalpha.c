#include "libft.h"

/**
 * Essa função retorna 1 se o caractere for uma letra (a-z, A-Z),
 * e retorna 0 caso contrario, ela faz o cast seguro de c para unsigned char
 * para evitarmos comportamento indefenido, se for passado um valor negativo
 * para facilitar a legibilidade e manutenção os caracteres ASCII (65 - 90 , 97 - 122)
 * foram evitados
 */

int	ft_isalpha(int c)
{
	unsigned char	uc;

	if (c == -1)
		return (0);
	uc = (unsigned char)c;
	return ((uc >= 'A' && uc <= 'Z') || (uc >= 'a' && uc <= 'z'));
}
