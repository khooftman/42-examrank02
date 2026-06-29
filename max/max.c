int max(int *tab, unsigned int len)
{
    int m;
    unsigned int i;

    m = tab[0];

    while (i < len)
    {
        if (tab[i] > m)
            m = tab[i];
        i++;
    }
    return (m);
}

