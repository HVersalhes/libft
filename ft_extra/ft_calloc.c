#include "libft.h"
/*
 * ft_calloc - Aloca memória para um array 
 * de nmemb elementos de size bytes cada,
 * e inicializa todos os bytes com zero.
 *
 * @nmemb: número de elementos.
 * @size: tamanho de cada elemento em bytes.
 * @total = nmemb x size ex: 5 x 4 = 20 bytes
 * se o resultado da divisão do total / size for != de nmemb
 * enão ouve estouro na multiplicação e ultrapassou o limite do size_t
 * se for verdade retorna NULL
 * tenta reservar o espaço de bytes necessarios para cada elemento na memoria
 * malloc(total) se não for possivel retorna Null (falta de memoria)
 * caso foi possivel reservar chama bzero e limpa a memoria toda 
 * colocando todos os bytes em zero e
 * Retorna um ponteiro para a memória alocada, ou NULL em caso de erro.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
