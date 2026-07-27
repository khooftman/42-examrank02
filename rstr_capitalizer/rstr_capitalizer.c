#include <unistd.h>

void rstr_cap(char *str)
{
    int i = 0;
    char c;

    while (str[i])
    {
        c = str[i];
        
        // Als het een letter is, zet deze eerst om naar een kleine letter
        if (c >= 'A' && c <= 'Z')
            c += 32;
            
        // Controleer of dit het einde van een woord is
        // (volgende karakter is een spatie, tab of het einde van de string)
        if ((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0') 
            && (c >= 'a' && c <= 'z'))
        {
            c -= 32; // Maak er een hoofdletter van
        }
        
        // Print het huidige karakter (letter of whitespace)
        write(1, &c, 1);
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
