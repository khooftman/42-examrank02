#include <unistd.h>

int main    (int ac, char **av)
{
    int seen [256] = {0};
    int i = 0;

    if (ac == 3)
    {
    // Stap 1:registreren wat in s2 zit
        while (av[2][i])
        {
            seen[(unsigned char)av[2][i]] = 1;
            i++;
        }
    
        // STAP 2: Loop door string 1 (av[1]) om te printen (garandeert de juiste volgorde!)
        i = 0;
        while (av[1][i])
        {
            if (seen[(unsigned char)av[1][i]] == 1)
            {
                write(1, &av[1][i], 1);
                seen[(unsigned char)av[1][i]] = 0; // Voorkom dubbel printen!
            }
            i++;
        }
    write(1, "\n", 1);
    }
}
