#include "libft.h"
/**
 *ft_bzero - Zera um bloco de memória.
 *@s: Ponteiro para o início do bloco de memória a ser zerado.
 *@n: Quantidade de bytes a serem definidos como zero.
 *
 *Esta função define os 'n' primeiros bytes do bloco de memória
 *apontado por 's' com o valor zero (0).
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;

	if (!s && n > 0)
		return;
	ptr = ((unsigned char *)s);
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
