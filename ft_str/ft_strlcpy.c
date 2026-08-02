#include "libft.h"
/*
 * Se o tamanho do destino for maior que zero,
 * vamos copiar cada caractere da origem para o destino, um a um,
 * até encontrarmos o fim da string de origem ou até quase encher o destino.
 * O objetivo é sempre deixar espaço para colocar o '\0' no final da string de destino.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (!src || !dst)
		return (0);
	len = 0;
	if (dstsize > 0)
	{
		while (src[len] && len < dstsize -1)
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	return (ft_strlen(src));
}
