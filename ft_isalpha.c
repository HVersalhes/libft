#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return ((uc >= 'A' && uc <= 'Z') || (uc >= 'a' && uc <= 'z'));
}
