#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 0;

    int a = atoi(av[1]);
    int b = atoi(av[3]);
    int c = 0;

    if (ac == 4)
    {
        if (av[2][0] == '+')
            c = a + b;
        else if (av[2][0] == '-')
            c = a - b;
        else if (av[2][0] == '*')
            c = a * b;
        else if (av[2][0] == '/')
            c = a / b;
        else if (av[2][0] == '%')
            c = a % b;
        printf("%d", c);
    }
    printf("\n");
}