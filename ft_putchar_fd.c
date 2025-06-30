#include "libft.h"
/**
 * ft_putchar_fd - Escreve o caractere 'c' no file descriptor 'fd'.
 * @c: Caractere a ser escrito.
 * @fd: File descriptor onde escrever.
 *
 * Não retorna valor.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
