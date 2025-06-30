#include "libft.h"
/**
 *Retorna 1 se o caractere for imprimível (incluindo espaço), 0 caso contrário.
 *Caracteres imprimíveis no padrão ASCII são aqueles no intervalo de 32 a 126.
 *32:' ' (espaço)
 *126:'~'
 *Não há necessidade de checagem extra, pois qualquer valor fora desse intervalo retorna 0.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
