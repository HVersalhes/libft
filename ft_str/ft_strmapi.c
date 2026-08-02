#include "libft.h"
/**
 * ft_strmapi - Aplica a função f a cada caractere da string s,
 * passando o índice e o caractere, e retorna a nova string resultante.
 * @s: String de entrada.
 * @f: Função que recebe índice e caractere, retorna um novo caractere.
 *
 * Retorna uma nova string criada a partir das aplicações sucessivas de f.
 * Retorna NULL se a alocação falhar ou se s ou f forem NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*new_str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
