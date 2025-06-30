#include "libft.h"
/**
 *Retorna 1 se o caractere estiver no intervalo ASCII (0-127), 0 caso contrário.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
