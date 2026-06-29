int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		else if (str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
			n = n * 10 + (str[i++] - '0');
		i++;
	}
	return (n * sign);
}
#include <stdio.h>
int	main(void)
{
	printf("dit is de uitkomst -> %d <- van de atoi", ft_atoi("-125645643"));
}