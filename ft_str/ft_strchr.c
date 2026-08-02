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
	char	*found;

	found = NULL;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == (char)c)
		{
			found = (char *)s;
			break;
		}
		s++;
	}
	if ((char)c == '\0')
		found = (char *)s;
	return (found);
}
