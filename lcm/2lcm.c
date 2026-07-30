unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int n;

    if (a > b)
        n = a;
    else
        n = b;
    if (a == 0 || b == 0)
        return (0);
    
    while (n % b != 0 || n % a != 0)
    {
        n++;
    }
    return(n);
}

#include <stdio.h>
int main(void)
{
    printf("lcm is %d", lcm(3, 5));
}