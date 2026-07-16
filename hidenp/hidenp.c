#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        char *s1 = av[1];
        char *s2 = av[2];

        while (*s1 && *s2)
        {
            if(*s1 == *s2)
                s1++;
            s2++;
        }
        if(*s1 == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return(0);
}