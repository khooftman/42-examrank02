#include <string.h>

ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j = 0;

    while(s[i])
    {
        while(accept[j] && accept[j] != s[i])
            j++;
        if (!accept[j])
            return(i);
        i++;
    }
    return (i);
}
