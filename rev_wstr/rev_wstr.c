#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *str = av[1];
        int i = 0;

        // 1. Zoek het einde van de string (vervangt ft_strlen)
        while (str[i] != '\0')
            i++;

        // 2. Loop van rechts naar links door de string
        i--; // Zet i op de allerlaatste letter
        while (i >= 0)
        {
            int end = i;
            
            // Zoek het begin van het huidige woord
            while (i >= 0 && str[i] != ' ' && str[i] != '\t')
                i--;
            
            // 3. Print het woord van links naar rechts
            int start = i + 1;
            while (start <= end)
            {
                write(1, &str[start], 1);
                start++;
            }

            // 4. Print een spatie als er nóg een woord achteraan komt
            if (i >= 0)
            {
                write(1, " ", 1);
            }
            
            i--; // Spring over de spatie heen om aan het volgende woord te beginnen
        }
    }
    write(1, "\n", 1);
    return (0);
}
