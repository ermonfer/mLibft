#include "../source_code/ft_bzero.c"
#include <string.h>
#include <stdio.h>
#include <stdlib.h> // Para la función atoi

int main(int argc, char *argv[]) {
    if (argc != 2)
	{
        printf("Introduzca 2 args en lugar de %d\n", argc);
        return 1;
    }

    char *str1 = strdup(argv[1]);
    char *str2 = strdup(argv[1]);

    // Prueba de la función ft_bzero
    ft_bzero(str1, strlen(str1) + 1);
    bzero(str2, strlen(str2) + 1);

    // Comparar los resultados
    if (memcmp(str1, str2, strlen(str1) + 1) == 0)
		printf("Las funciones ft_bzero y bzero produjeron los mismos resultados.\n");
   	 else
		 printf("Las funciones ft_bzero y bzero NO produjeron los mismos resultados.\n");

    free(str1);
    free(str2);

    return 0;
}
