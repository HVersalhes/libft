#include "libft.h"
/**
 * ft_striteri - Aplica a função f a cada caractere da string s,
 * passando o índice e o endereço do caractere, permitindo modificação.
 * @s: String de entrada (será modificada).
 * @f: Função que recebe índice e ponteiro para caractere.
 *
 * Não retorna valor.
 * Não faz nada se s ou f forem NULL.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
