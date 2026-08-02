#include "libft.h"

/*
 * ft_strchr
 * -----------
 * Procura a primeira ocorrência do caractere 'c' na string 's'.
 * Retorna um ponteiro para a posição do caractere encontrado na string.
 * Se o caractere não for encontrado, retorna NULL.
 * Se 'c' for '\0', retorna ponteiro para o final da string.
 * Protege contra ponteiro nulo, retornando NULL se 's' for NULL.
 */


char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}`
	return ((char *)s);
}
