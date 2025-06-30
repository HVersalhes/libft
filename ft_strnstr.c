#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (!*needle)
		return (char *)haystack;
	while (*haystack && len)
	{
		i = 0;
		j = 0;
		while (haystack[i] == needle[j] && needle[j] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return (char *)haystack;
		haystack ++;
		len--;
	}
	return NULL;
}
