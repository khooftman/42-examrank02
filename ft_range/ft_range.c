#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size;

    if (start <= end)
        size = end - start + 1;
    else if (start > end)
        size = start - end + 1;
    
    int arr = malloc(size * sizeof(int));
    if (arr == NULL)
        return (NULL);
    
    int i = 0;
    while (i < size)
    {
        arr[i] = start;
        if (start <= end)
            start += 1;
        else
            start -= 1;
        i++;
    }
    return(arr);
}
