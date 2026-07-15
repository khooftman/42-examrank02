#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size = 0;
    int *arr = 0;
    int i;

    if(start <= end)
    {
        size = end - start + 1;
    }
    else if (start > end)
    {
        size = start - end + 1;
    }

    arr = malloc(size);
    if (arr == NULL)
        return (NULL);
    
    i = 0;
    while(i < size)
    {
        arr[i] = start;
        if(start <= end)
            start += 1;
        else            
            start -= 1;
        i++;
    }
    return(arr);
}

#include <stdio.h>
int main(void)
{
    // Sla de pointer op
    int *arr = ft_range(3, 5);
    
    // Print direct de indexen uit
    printf("Index 0: %d\n", arr[0]);
    printf("Index 1: %d\n", arr[1]);
    printf("Index 2: %d\n", arr[2]);
    
    // Altijd free'en, heel belangrijk voor je examen!
    free(arr); 
    return (0);
}