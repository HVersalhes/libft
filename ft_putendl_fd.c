#include "libft.h"
/**
 * ft_putendl_fd - Escreve a string 's' seguida de uma nova linha no file descriptor 'fd'.
 * @s: String a ser escrita.
 * @fd: File descriptor onde escrever.
 *
 * Não retorna valor.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
