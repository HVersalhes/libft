#include "libft.h"
/*
 * ft_memchr - Procura o primeiro byte igual a 'c' em um bloco de memória.
 * @s: ponteiro para o início do bloco de memória onde será feita a busca.
 * @c: byte (convertido para unsigned char) a ser procurado.
 * @n: número de bytes a serem examinados no bloco de memória.
 *
 * Retorna um ponteiro para o primeiro byte encontrado igual a 'c'
 * dentro dos 'n' bytes examinados, ou NULL caso não encontre.
 * Se o ponteiro 's' for NULL e n for maior que 0, 
 * retorna NULL para evitar comportamento indefinido.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char	uc;

	if (!s && n > 0)
		return (NULL);
	ptr = ((const unsigned char *)s);
	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*ptr == uc)
			return (void *)ptr;
		ptr++;
		n--;
	}
	return (NULL);
}
