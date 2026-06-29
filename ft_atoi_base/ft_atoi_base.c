#include <unistd.h>

int ft_atoi_base(const char *str, int base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int d;
    char c;

    // 1. Sla witruimtes over (Verplicht voor 42 School)
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;

    // 2. Behandel het teken (+ of -)
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }

    // 3. De hoofdloop voor het omzetten
    while (str[i])
    {
        // Normaliseer hoofdletters naar kleine letters
        if (str[i] >= 'A' && str[i] <= 'Z')
            c = str[i] + 32;
        else
            c = str[i];

        // Bepaal de waarde van het huidige karakter
        if (c >= '0' && c <= '9')
            d = c - '0';
        else if (c >= 'a' && c <= 'f')
            d = 10 + (c - 'a');
        else
            break; // Ongeldig karakter voor atoi_base

        // Controleer of de waarde wel binnen de meegegeven base past
        if (d >= base)
            break;

        // Berekening (Houd het resultaat hier positief)
        result = result * base + d;
        i++;
    }

    // 4. Pas het teken pas helemaal aan het einde toe
    return (result * sign);
}
