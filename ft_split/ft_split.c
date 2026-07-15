#include <stdlib.h>
#include <stdio.h>

static int is_sep(char c)
{
    return(c == ' ' || c == '\t' || c == '\n');
}
char **ft_split(char *str)
{
    char **splitter = malloc(1000);
    int i = 0;
    int w = 0;    
    int l = 0;

    while(str[i])
    {
        if(!is_sep(str[i]))
        {
            splitter[w] = malloc(1000);
            while (str[i] && !is_sep(str[i]))
            {
                splitter[w][l] = str[i];
                i++;
                l++;
            }
            splitter[w][l] = '\0';
            w++;
            l = 0;
        }
        else
            i++;
    }
    splitter[w] = NULL;
    return(splitter);
}

int main()
{
    char **splitted = ft_split("    Daniel Mateus Campos Marques");
    int i = 0;
    while(splitted[i])
    {
        printf("%s\n", splitted[i]);
        i++;
    }
}
