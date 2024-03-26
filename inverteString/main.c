#include "inverteString.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50


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

int main() {
    char str[MAX];

    // Solicitando a string ao usuário
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);


    // Invertendo a string
    inverteString(str);

    // Exibindo a string invertida
    printf("String invertida: %s\n", str);

    return 0;
}
