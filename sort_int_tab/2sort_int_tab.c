void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;

    while(i + 1 < size)
    {
        if(tab[i] > tab[i + 1])
        {
            int tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}

#include <stdio.h>
int main (void)
{
    int tab[] = {42, -5, 0, 1337, -7, 10, 21};
    unsigned int size = 7;
    unsigned int i;

    sort_int_tab(tab, 7);

    printf("Na:   ");
    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
}