#include "inverteString.h"
#include <string.h>

void inverteString(char *str) {
    int tamanho = strlen(str);
    int i, j;
    char aux;

    // Invertendo os caracteres da string
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }
}
