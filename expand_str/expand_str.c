#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int first = 1; // tracks if it's the first word
    
    if (ac == 2)
        while (av[1][i])
        {
            while (av[1][i] == ' ' || av[1][i] == '\t') 
                i++; // skip whitespace
            if (!av[1][i]) 
                break;
            if (!first) 
                write(1, "   ", 3); // 3-space separator between words
            first = 0;
            while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
                write(1, &av[1][i++], 1); // print word
        }
        write(1, "\n", 1);
}