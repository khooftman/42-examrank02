#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if (ac == 3)
    {
        // Loop door de tweede string totdat deze op is, OF totdat de eerste string compleet is
        while (av[2][j] && av[1][i])
        {
            if (av[2][j] == av[1][i])
                i++; // Match gevonden? Schuif op in de eerste string
            j++;     // Altijd opschuiven in de tweede string
        }

        // Als 'i' het einde van s1 heeft bereikt (de '\0'), betekent dit dat alle letters zijn gevonden!
        if (av[1][i] == '\0')
        {
            i = 0;
            while (av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}
