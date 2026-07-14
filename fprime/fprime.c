#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
    int n = atoi(av[1]);
    int f = 2;
    int first = 1;

    if (ac == 2)
    {
        if (n == 1)
            printf("1");
        
        while (f <= n)
            if (n % f == 0)
            {
                if(!first)
                    printf("*");
                printf("%d", f);
                first = 0;
                n /= f;
            }
            else
                f++;
    }
    printf("\n");
}
