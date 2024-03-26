#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>

//verifica se o termo está na sequência de fibonacci
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
