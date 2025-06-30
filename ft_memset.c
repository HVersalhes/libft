#include "libft.h"
/**
 * ft_memset - Preenche um bloco de memória com um valor específico.
 * @s: Ponteiro para o início do bloco de memória.
 * @c: Valor (convertido para unsigned char) a ser definido em cada byte.
 * @n: Número de bytes a serem preenchidos.
 * Retorna o ponteiro original 's'.
 * Proteção: Se 's' for NULL e 'n' > 0, não faz nada e retorna NULL.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s && n > 0)
		return (NULL);
	ptr = ((unsigned char *)s);
	while (n > 0)
	{
		*ptr = ((unsigned char)c);
		ptr++;
		n--;
	}
	return s;
}
