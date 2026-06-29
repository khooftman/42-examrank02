#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *dst;
    int i = 0;

    while (src[i])
        i++;
    dst = malloc(i + 1);
    if (!dst)
        return (NULL);
    int j = 0;
    while (src[j])
    {
        dst[j] = src[j];
        j++;
    }
    dst[j] = '\0';
    return (dst);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *origineel = "Hallo Wereld!";
    
    char *mijn_kopie = ft_strdup(origineel);
    char *echte_kopie = strdup(origineel);

    printf("Origineel:  %s\n", origineel);
    printf("Jouw ft:     %s\n", mijn_kopie);
    printf("Officiële:   %s\n", echte_kopie);

    // Geheugen netjes vrijmaken
    free(mijn_kopie);
    free(echte_kopie);

    return (0);
}