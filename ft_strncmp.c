#include "libft.h"
/* enquanto
 * i < n - ainda n\ao atingiu o limite da comparação
 * s1[i] ou s2[i] não atingiram o fim '\0' 
 * s1[i] == s2[i] e forem caracteres iguais
 * Compara até n caracteres das strings s1 e s2.
 * Se algum ponteiro for NULL, retorna -2 para indicar erro de ponteiro nulo.
 * Retorna 0 se as strings são iguais nos primeiros n caracteres,
 * ou a diferença entre o primeiro caractere diferente.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	if (!s1 || !s2)
		return (-2);
	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char )s2[i]);
}
