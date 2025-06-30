#include "libft.h"
/**
 * ft_strtrim - Remove caracteres do início e fim de uma string conforme um conjunto.
 * @s1: String a ser "aparada" (trimmed).
 * @set: String contendo o conjunto de caracteres a remover do início e do fim de s1.
 *
 * Retorna um ponteiro para uma nova string, cópia de s1, 
 * sem os caracteres de set no início e fim.
 * Retorna NULL em caso de erro de alocação ou se s1/set forem NULL.
 * A nova string está sempre terminada em '\0'.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
