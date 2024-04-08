#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../source_code/ft_calloc.c"
#include "../source_code/ft_memset.c"
#include "../source_code/ft_bzero.c"

/* por como esta hecha la funcion la comparacion con 
 * algun argumento nulo no tienen sentido */
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s nmemb size\n", argv[0]);
        return 1;
    }

    size_t nmemb = (size_t)atoi(argv[1]);
    size_t size = (size_t)atoi(argv[2]);

    // Allocating memory using ft_calloc
    int *arr_ft_calloc = (int *)ft_calloc(nmemb, size);
    if (arr_ft_calloc == NULL) {
        printf("Memory allocation using ft_calloc failed.\n");
        return 1;
    }

    // Allocating memory using calloc
    int *arr_calloc = (int *)calloc(nmemb, size);
    if (arr_calloc == NULL) {
        printf("Memory allocation using calloc failed.\n");
        free(arr_ft_calloc);
        return 1;
    }

    // Comparing memory allocated by ft_calloc and calloc
    printf("Comparing memory allocated by ft_calloc and calloc:\n");
    if (memcmp(arr_ft_calloc, arr_calloc, nmemb * size) == 0) {
        printf("Memory contents are identical.\n");
    } else {
        printf("Memory contents are different.\n");
    }

    // Freeing memory
    free(arr_ft_calloc);
    free(arr_calloc);

    return 0;
}
