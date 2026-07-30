#include <unistd.h>

void print_hex(int n)
{
    char *hex = "0123456789abcdef";

    if(n >= 16)
        print_hex(n / 16);
    write (1, &hex[n % 16], 1);

}
int main(void)
{
    print_hex(0);
}