#include <stdlib.h>

int get_len(int n)
{
    int len = 0;
    if (n <= 0)
        len = 1;
    while(n != 0)
    {
        len++;
        n /= 10;
    }
    return(len);
}
char *ft_itoa(int n)
{
    int len = get_len(n);

    char *s = malloc(len + 1);

    if (s == NULL)
        return (NULL);
    
    s[len] = '\0';

    if (n == 0)
    {
        s[0] = '0';
        return (s);
    } 

    if (n < 0)
        s[0] = '-';
    while(n)
    {
        len--;
        if (n < 0)
            s[len] = -(n % 10) + '0';
        else
            s[len] = (n % 10) + '0';
        n /= 10;
    }
    return (s);
}

#include <stdio.h>
int main(void)
{
    printf("%s", ft_itoa(-2147483648));
}
