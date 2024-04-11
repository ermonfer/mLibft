#include "../source_code/ft_striteri.c"
#include <stdio.h>

void modify_char(unsigned int index, char *c)
{
    (void)index;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s <cadena>\n", argv[0]);
        return 1;
    }

    char *str = argv[1];

    printf("Cadena original: %s\n", str);

    // Llamamos a ft_striteri para modificar la cadena
    ft_striteri(str, &modify_char);

    printf("Cadena modificada: %s\n", str);

    return 0;
}
