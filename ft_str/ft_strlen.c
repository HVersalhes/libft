#include "libft.h"
/**
 *Retorna o comprimento da string s (número de caracteres antes do '\0').
 *Retorna 0 se s for NULL.
 *Essa medida de seguraça é uma prevenção para possiveis erros de segmentação
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}
