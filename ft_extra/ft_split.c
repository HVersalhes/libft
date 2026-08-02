#include "libft.h"

/**
 * ft_split - Divide um string em substrings usando um delimitador
 * @s : String a ser dividida.
 * @c : Caractere delimitador.
 * Retorna um arry de strings, terminado com NULL.
 * Retorna NULL em caso de erro de alocação ou se s for NULL
 * Reaproveita funções da libft para substrings e alocação
 * liberta_split - é a função auxiliar que usei para liberar
 * o arry em caso de erro
 */

static	void	free_split(char **split, size_t i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if(*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	words;
	char	**result;
	
	i = 0;
	start = 0;
	end = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (s[end])
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (start < end)
		{
			result[i] = ft_substr(s, start, end - start);
			if (!result[i++])
			{
				free_split(result, i - 1);
				return (NULL);
			}
		}
	}
	return (result);
}
