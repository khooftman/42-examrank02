#include <unistd.h>

int ft_atoi_base(const char *str, int base)
{
    int sign = 1;
    int d = 0;
    int result = 0;

    if(*str == '-')
    {
        sign = -1;
        str++;
    }

    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            d = *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            d = *str - 'a' + 10;
        else if (*str >= 'A' && *str <= 'F')
            d = *str - 'A' + 10;
        else
            break;
        if (d >= base)
            break;
        result = result * base + d;
        str++;
    }
    return (result * sign);
}
