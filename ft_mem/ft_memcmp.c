#include "libft.h"
/*
 * ft_memcmp - Compara os primeiros 'n' bytes de dois blocos de memória.
 * @s1: ponteiro para o primeiro bloco de memória.
 * @s2: ponteiro para o segundo bloco de memória.
 * @n: número de bytes a serem comparados.
 *
 *  Retorna:
 *  0  se ambos os blocos são iguais nos 'n' bytes;
 * <0 se o primeiro byte diferente em s1 é menor que o de s2;
 * >0 se o primeiro byte diferente em s1 é maior que o de s2.
 * Se s1 ou s2 for NULL e n > 0, retorna 0 para evitar comportamento indefinido.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1;
	const unsigned char *p2;

	if ((!s1 || !s2) && n > 0)
		return 0;
	p1 = ((const unsigned char *)s1);
	p2 = ((const unsigned char *)s2);
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
