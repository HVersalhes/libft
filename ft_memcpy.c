#include "libft.h"
/**
 * ft_memcpy - Copia n bytes da origem para o destino.
 * @dest: Ponteiro para o array de destino onde os dados serão copiados.
 * @src: Ponteiro para o array de origem de onde os dados serão copiados.
 * @n: Número de bytes a serem copiados.
 * 
 * Retorna o ponteiro para o destino.
 * Não lida com sobreposição de memória.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char *s;

	if (!dest && !src)
		return (NULL);
	d = ((unsigned char *)dest);
	s = ((const unsigned char *)src);
	while (n--)
		*d++ = *s++;
	return (dest);
}
