#include "libft.h"

/**
 *Retorna 1 se o caractere for alfanumérico (letra ou dígito), 0 caso contrário.
 *Usa ft_isalpha e ft_isdigit para compatibilidade e segurança.
 *a verificação de segurança para EOF(END OF FILE) não é estritamente necessária
 *mas optei só para manter uma camada de segurança extra
 */

int	ft_isalnum(int c)
{
	if (c == -1)
		return (0);
	return (ft_isalpha(c) || ft_isdigit(c));
}
