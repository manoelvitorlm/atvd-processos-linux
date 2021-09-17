#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define VALOR1 10000000
#define VALOR2 5000000

int buscaSequencial(int *vetor, int chave, int tamanho);

int main(void) {

    int *v = malloc(VALOR2 * sizeof(int));
    int chave, valor;

    printf("Geração de valor 0 até 1.000.000\n");

    srand(time(NULL));

    // armazenamento no vetor
    for (int i = 0; i < VALOR2; i++) {
        v[i] = rand() % VALOR1;
    }

    srand(time(NULL));

    //sorteio de posição de busca
    chave = rand() % VALOR2;

    valor = buscaSequencial(v, chave, VALOR1);

    printf("%d ", v[valor]);

    printf("\n");

    return 0;
}

// Utilização do algoritmo de busca sequencial
// para varrer o vetor
int buscaSequencial(int *vetor, int chave, int tamanho) {
    
    int n;

    for (n = 0; n < tamanho; n++) {
        if (vetor[n] == chave) {
            return n;
        }
    }

    return -1;
}