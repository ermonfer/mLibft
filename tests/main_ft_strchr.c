#include <stdio.h>
#include <string.h>
#include "../source_code/libft.h"
#include "../source_code/ft_strchr.c"

int main(int argc, char *argv[]) {
  if (argc !=  3) {
    printf("uso: %s haystack needle", argv[0]);
    return 1; 
  }

  const char *cadena = argv[1];
  char caracter = *argv[2];

  char *ptr_ft_strchr = strchr(cadena, caracter);
  char *ptr_strchr = strchr(cadena, caracter);

  printf("Cadena: \"%s\", Caracter: '%c'\n", cadena, caracter);

  printf("  ft_strchr(): ");
  if (ptr_ft_strchr) {
    printf("%p (%s)\n", ptr_ft_strchr, ptr_ft_strchr);
  } else {
    printf("NULL\n");
  }

  printf("  strchr(): ");
  if (ptr_strchr) {
    printf("%p (%s)\n", ptr_strchr, ptr_strchr);
  } else {
    printf("NULL\n");
  }

  return 0;
}
