#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;

		// 1. Sprint naar het einde
		while (av[1][i])
			i++;
		
		// 2. Skip spaties aan het einde (ga terug)
		i--;
		while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
			i--;
		
		// 3. Loop terug naar het begin van het woord
		while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
			i--;
		
		// 4. Zet i op de eerste letter en print vooruit
		i++;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}