#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>

int estaEmFibonacci(int termo){
	//variáveis auxiliares
	int termoA = 0, termoB = 1, aux;
    while (termoB < termo) {
        aux = termoB;
        termoB = termoA + termoB;
        termoA = aux;
    }
    //retorna 0 se falso e 1 se verdadeiro
    return termoB == termo;
}

int main() {
    int num;
    printf("Digite um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &num);

    if (estaEmFibonacci(num)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", num);
    }

    return 0;
}
