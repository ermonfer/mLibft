#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	result = 0;
	while (ft_isdigit(*str))
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}
