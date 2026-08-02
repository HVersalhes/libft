#include "libft.h"
/*
 *ft_tolower - Converte um caractere maiúsculo para minúsculo. 
 *Recebe um inteiro `c`, que representa um caractere (ou EOF).
 *Se `c` for uma letra maiúscula ('A' a 'Z'), 
 *retorna a letra minúscula correspondente.
 *Para outros valores (incluindo minúsculas, 
 símbolos, números e EOF), retorna o próprio valor.
 *O comportamento é seguro para qualquer valor de `
 *int` que possa ser representado como unsigned char ou EOF.
 */
int	ft_tolower(int c)
{
	unsigned char	uc;
	if (c == -1)
		return (-1);
	uc = ((unsigned char)c);
	if (uc >= 'A' && uc <= 'Z')
		return (uc + 32);
	return (uc);
}
