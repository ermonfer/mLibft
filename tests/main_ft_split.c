#include "../source_code/libft.h"
#include "../source_code/ft_strchr.c"
#include "../source_code/ft_substr.c"
#include "../source_code/ft_split.c"
#include "../source_code/ft_strdup.c"
#include "../source_code/ft_strlen.c"
#include "../source_code/ft_memcpy.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Uso: %s <cadena> <delimitador>\n", argv[0]);
        return 1;
    }

    char *str = argv[1];
    char delim = argv[2][0]; // Tomamos el primer carácter del segundo argumento como delimitador

    printf("Cadena original: \"%s\"\n", str);
    printf("Delimitador: '%c'\n", delim);

    char **result = ft_split(str, delim);
    if (result != NULL)
    {
        printf("Resultado:\n");
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("[%d]: \"%s\"\n", i, result[i]);
            free(result[i]);
        }
        free(result);
    }
    else
    {
        printf("Error al dividir la cadena.\n");
    }

    return 0;
}
