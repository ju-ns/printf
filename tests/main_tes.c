#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;
    char c = 'A';
    char *str = "Hello 42!";
    char *null_str = NULL;
    int d = -12345;
    unsigned int u = 4294967295;
    int x = 48879;
    void *ptr = str;
    void *null_ptr = NULL;

    // --- Teste %c ---
    ret1 = ft_printf("ft_printf: %c\n", c);
    ret2 = printf   ("printf   : %c\n", c);
    printf("ret ft: %d | ret printf: %d\n\n", ret1, ret2);

    // --- Teste %s ---
    ret1 = ft_printf("ft_printf: %s\n", str);
    ret2 = printf   ("printf   : %s\n", str);
    printf("ret ft: %d | ret printf: %d\n\n", ret1, ret2);

    // --- Teste %s com NULL ---
    ret1 = ft_printf("ft_printf: %s\n", null_str);
    ret2 = printf   ("printf   : %s\n", null_str);
    printf("ret ft: %d | ret printf: %d\n\n", ret1, ret2);

    // --- Teste %d/%i ---
    ret1 = ft_printf("ft_printf: %d %i\n", d, d);
    ret2 = printf   ("printf   : %d %i\n", d, d);
    printf("ret ft: %d | ret printf: %d\n\n", ret1, ret2);

    // --- Teste %u ---
    ret1 = ft_printf("ft_printf: %u\n", u);
    ret2 = printf   ("printf   : %u\n", u);
    printf("ret ft: %d | ret printf: %d\n\n", ret1, ret2);

    // --- Teste %x/%X ---
    ret1 = ft_printf("ft_printf: %x %X\n", x, x);
    ret2 = printf   ("printf   : %x %X\n", x, x);
    printf("ret ft: %d | ret printf: %d\n\n", ret1, ret2);

    // --- Teste %p ---
    ret1 = ft_printf("ft_printf: %p\n", ptr);
    ret2 = printf   ("printf   : %p\n", ptr);
    printf("ret ft: %d | ret printf: %d\n\n", ret1, ret2);

    // --- Teste %p com NULL ---
    ret1 = ft_printf("ft_printf: %p\n", null_ptr);
    ret2 = printf   ("printf   : %p\n", null_ptr);
    printf("ret ft: %d | ret printf: %d\n\n", ret1, ret2);

    // --- Teste %% ---
    ret1 = ft_printf("ft_printf: %%\n");
    ret2 = printf   ("printf   : %%\n");
    printf("ret ft: %d | ret printf: %d\n\n", ret1, ret2);

    return 0;
}
