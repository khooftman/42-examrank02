void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    
    while (i + 1 < size) 
    {
        if (tab[i] > tab[i + 1]) // swap if out of order
        {
            int tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0; // restart from beginning after swap
        }
        else 
        i++;
    }
}