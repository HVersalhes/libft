#include "libft.h"
/**
 * ft_strlcat - Concatena a string src à string dst, limitando o tamanho total a dstsize.
 * 
 * @dst:     String de destino (deve ter espaço suficiente para receber src).
 * @src:     String de origem.
 * @dstsize: Tamanho total do buffer de destino (incluindo o '\0').
 *
 * Retorna o comprimento total que a string concatenada teria (comprimento inicial de dst + comprimento de src).
 * Garante que dst sempre estará terminada por '\0' se dstsize > 0.
 * Não concatena mais do que (dstsize - strlen(dst) - 1) bytes de src.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);

	if (dst_len > dstsize)
		return (src_len + dst_len);
	len = 0;
	if (dstsize > 0)
	{
		while (src[len] && dst_len + len < dstsize -1)
		{
			dst[dst_len + len] = src[len];
			len++;
		}
		dst[dst_len + len] = '\0';
	}
	return (src_len + dst_len);
}
