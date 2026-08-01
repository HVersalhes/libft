#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return (uc >= '0' && uc <= '9');
}
