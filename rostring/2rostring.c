#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int first_start;
    int first_end;
    int first = 1;
    char *s = av[1];

    if (ac >= 2)
    {
        while (s[i] == ' ' || s[i] == '\t')
            i++;
        first_start = i;
        while (s[i] && s[i] != ' ' && s[i] != '\t')
            i++;
        first_end = i;
        while (s[i])
        {
            while(s[i] && s[i] == ' ' || s[i] == '\t')
                i++;
            if(!s[i])
                break;
            if(!first)
                write(1, " ", 1);
            first = 0;
            while(s[i] && s[i] != ' ' && s[i] != '\t')
                write(1, &s[i++], 1);
        }
        if (first_end > first_start)
        {    
            if (!first)
                write (1, " ", 1); 
            write(1, &s[first_start], first_end - first_start);
        }
    }
    write(1, "\n", 1); 
}
