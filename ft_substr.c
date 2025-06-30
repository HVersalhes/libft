#include "libft.h"

/**
 * ft_substr - Cria uma substring de uma string, alocando memória nova.
 * @s: String original de onde será extraída a substring.
 * @start: Posição inicial para começar a substring (base 0).
 * @len: Tamanho máximo da substring.
 *
 * Retorna um ponteiro para a nova substring alocada.
 * Retorna NULL caso a alocação falhe ou se 's' for NULL.
 * A substring está sempre terminada em '\0'.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	substr_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (char *)ft_calloc(1, sizeof(char));
	substr_len = s_len - start;
	if (substr_len > len)
		substr_len = len;
	substr = (char *)malloc(substr_len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, substr_len);
	substr[substr_len] = '\0';
	return substr;
}
