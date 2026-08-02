#include "libft.h"
/**
 * ft_putnbr_fd - Escreve o número inteiro 'n' no file descriptor 'fd'.
 * @n: Número inteiro a ser escrito.
 * @fd: File descriptor onde escrever.
 * Não retorna valor.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
}
