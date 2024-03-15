#include "../source_code/ft_isalnum.c"
#include "../source_code/ft_isalpha.c"
#include "../source_code/ft_isdigit.c"
#include "../source_code/ft_isupper.c"
#include "../source_code/ft_islower.c"
#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
	{
        printf("Uso: %s argumentos", argv[0]);
        return 1;
    }

    int c = argv[1][0];

    // Comparar los resultados
	printf("ft_isalnum: %d\n", ft_isalnum(c));
	printf("ft_isalnum: %d\n", isalnum(c));
    return 0;
}
