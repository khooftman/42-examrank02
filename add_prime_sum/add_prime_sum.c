#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res);
}

int is_prime(int nb)
{
    int i = 2;

    if (nb <= 1)
        return (0);
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int nb;
    int sum = 0;

    if (ac == 2)
    {
        nb = ft_atoi(av[1]);

        while (nb > 1)
        {
            if (is_prime(nb))
                sum += nb;
            nb--;
        }
        ft_putnbr(sum);
    }
    else
    {
        write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}