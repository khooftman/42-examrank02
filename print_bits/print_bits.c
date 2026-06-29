#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int i = 8;

    while (i--)
    {
        char b = ((octet >> i) & 1) + '0';
        write(1, &b, 1);
    }
}
int main(void)
{
    print_bits(8);
}