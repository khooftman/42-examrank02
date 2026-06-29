#include <unistd.h>

void ft_putnbr(int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

int main (void)
{
    int n = 1;

    while (n <= 100)
    {
        if (n % 15 == 0)
            write(1, "fizzbuzz\n", 10);
        else if (n % 3 == 0)
            write(1, "fizz\n", 6);
        else if (n % 5 == 0)
            write(1, "buzz\n", 6);
        else
        {
            ft_putnbr(n);
            write(1, "\n", 1);
        }
        n++;
    }            
}