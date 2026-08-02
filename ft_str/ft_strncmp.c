#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (s1 == s2 || n == 0)
		return (0);
	if (!s1)
		return (-(unsigned char)s2[0]);
	if (!s2)
		return ((unsigned char)s1[0]);
	len = 0;
	while (len < n - 1 && s1[len] && s1[len] == s2[len])
		len++;
	return ((unsigned char)s1[len] - (unsigned char )s2[len]);
}
