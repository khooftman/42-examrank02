#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int t;
        int a = atoi(av[1]);
        int b = atoi(av[2]);
        while (b)
        {
            t = b;
            b = a % b;
            a = t;
        }
        printf("%d", a);
    }
    else    
        printf("\n");
}
