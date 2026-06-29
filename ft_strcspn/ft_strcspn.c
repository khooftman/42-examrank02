#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("--- TEST 1: Normale match ---\n");
	printf("ft_strcspn: %zu\n", ft_strcspn("citroen", "tr"));
	printf("strcspn:    %zu\n", strcspn("citroen", "tr"));

	// Test 2: Geen enkele match (moet de hele lengte van 'str' teruggeven,

	printf("\n--- TEST 2: Geen match ---\n");
	printf("ft_strcspn: %zu\n", ft_strcspn("citroen", "xyz"));
	printf("strcspn:    %zu\n", strcspn("citroen", "xyz"));

	return (0);
}