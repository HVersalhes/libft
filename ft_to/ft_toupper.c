#include "libft.h"
/**
 *ft_toupper - Converte um caractere minúsculo para maiúsculo.
 *  
 *Recebe um inteiro `c`, que representa um caractere (ou EOF).
 *Se `c` for uma letra minúscula ('a' a 'z'), 
 *retorna a letra maiúscula correspondente.
 *Para outros valores (incluindo maiúsculas, símbolos, 
 *números e EOF), retorna o próprio valor. 
 *O comportamento é seguro para qualquer valor de 
 *`int` que possa ser representado como unsigned char ou EOF.
 */
int	ft_toupper(int c)
{
	unsigned char uc;
	if (c == -1)
		return (0);
	uc = ((unsigned char)c);
	if (uc >= 'a' && uc <= 'z')
		return (uc - 32);
	return (uc);
}
