#include <stdlib.h>

int get_len(int n)
{
    int len = 0;

    if (n <= 0)
        len = 1;
    
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    return(len);

}

char *ft_itoa(int nbr)
{
    int len = get_len(nbr);
    char *str;

    str = malloc(len + 1);
    if (!str)
        return (NULL);

    str[len] = '\0';

    if (nbr == 0)
    {
        str[0] = '0';
        return (str);
    }

    if(nbr < 0)
        str[0] = '-';

    while (nbr != 0)
    {
        len --;
        if(nbr < 0)
        {
            str[len] = -(nbr % 10) + '0';
        }
        else
            str[len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return (str);

}
#include<stdio.h>
int main(void)
{
    printf("%s\n" , ft_itoa(-214748364));
    printf("%s\n" , ft_itoa(-85));
    printf("%s\n" , ft_itoa(0));
    printf("%s\n" , ft_itoa(5));

}
