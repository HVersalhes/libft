#include "libft.h"
/**
 * ft_memmove - Copia n bytes da origem para o destino, mesmo com sobreposição.
 * @dest: Ponteiro para o destino dos dados copiados.
 * @src: Ponteiro para a origem dos dados a serem copiados.
 * @n: Número de bytes a copiar.
 *
 * Retorna o ponteiro para o destino.
 * Copia corretamente mesmo se as áreas de memória se sobrepõem.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;

	if(!dest && !src)
		return (NULL);
	d = ((unsigned char *)dest);
	s = ((const unsigned char *)src);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}
