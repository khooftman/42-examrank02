#include <unistd.h>

void rstr_cap(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i + 1] == '\0' || str[i + 1] == ' ' || str[i + 1] == '\t') && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        write(1, &str[i], 1); 
        i++;
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        write(1, "\n", 1);
    }
    else
    {
        int i = 1;
        while (i < ac)
        {
            rstr_cap(av[i]);
            i++;
        }
    }
    return (0);
}
