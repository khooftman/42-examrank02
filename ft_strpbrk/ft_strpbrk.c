#include <stddef.h>

char    *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j;

    while (s1[i])
    {
        j = 0;
        // Loop door heel s2 voor het huidige karakter s1[i]
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                // Geef het adres terug vanaf dit karakter (&s1[i])
                return ((char *)&s1[i]);
            }
            j++;
        }
        i++;
    }
    return (NULL); // Geen match gevonden