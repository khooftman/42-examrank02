#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = atoi(av[1]);
        int f = 2;
        int first = 1;

        if (n == 1)
            printf("1");
        while (f <= n)
        {
            while (n % f == 0)
            {
                if(!first)
                    printf("*");
                first = 0;
                n /= f;
                printf("%d", f); 
            }
            f++;
        }
    }
    printf("\n");
}
