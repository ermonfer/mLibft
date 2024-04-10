#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	i = 0;
	while (i < len)
	{
		result[i] = f((unsigned int)i, result[i]);
		i++;
	}
	return (result);
}
