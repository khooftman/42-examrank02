#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        // 1. Loop naar het absolute einde van de string (\0)
        while (av[1][i])
            i++;

        // 2. Loop terug over de spaties aan het einde.
        // BEVEILIGING: i > 0 zorgt dat we NOOIT onder de 0 zakken.
        while (i > 0 && (av[1][i - 1] == ' ' || av[1][i - 1] == '\t'))
            i--;

        // 3. Onthoud waar het woord eindigt
        int eind = i;

        // 4. Loop terug naar het begin van het woord
        while (i > 0 && av[1][i - 1] != ' ' && av[1][i - 1] != '\t')
            i--;

        // 5. Print het woord van 'i' tot 'eind' van voor naar achteren
        while (i < eind)
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    // 6. Altijd afsluiten met een nieuwe regel
    write(1, "\n", 1);
    return (0);
}
