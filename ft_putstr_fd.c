#include "libft.h"
/**
 * ft_putstr_fd - Escreve a string 's' no file descriptor 'fd'.
 * @s: String a ser escrita.
 * @fd: File descriptor onde escrever.
 *
 * Não retorna valor.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
