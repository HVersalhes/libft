#include "libft.h"
/**
 * ft_strdup - Cria uma cópia de uma string, alocando nova memória.
 * @s1: Ponteiro para a string de origem a ser copiada.
 *
 * Retorna um ponteiro para a nova string duplicada,
 * ou NULL em caso de erro de alocação.
 * A nova string deve ser liberada com free pelo usuário.
 */
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, len);
	copy[len] = '\0';
	return (copy);
}
