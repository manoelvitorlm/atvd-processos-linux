#include <stdlib.h>
#include <stdio.h>

void vetorMalloc();
void vetorCalloc();
void vetorDinamico();

int main(void) {

    vetorMalloc();
    vetorCalloc();
    vetorDinamico();
    
    return 0;
}

// Preenche o vetor alocando memória através
// do malloc
void vetorMalloc() {

    printf("Vetor com malloc\n");

    int *v;
    int n = 10;

    v = malloc(n * sizeof(int));

    // entrada de números
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // saída de números
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    free(v);
}

// Preenche o vetor alocando memória através
// do calloc
void vetorCalloc() {
    
    printf("\n");
    printf("Vetor com calloc\n");

    int *v;
    int n = 10;

    v = calloc(n, sizeof(int));

    // entrada de números
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // saída de números
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    free(v);
}

// Preenche o vetor alocando memória através 
// do calloc e do realloc
void vetorDinamico() {

    printf("\n");
    printf("Vetor com calloc e realloc\n");

    int *v;
    int n = 10;

    v = calloc(n, sizeof(int));

    // entrada de números
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    printf("Saida original\n");
    // saída de números
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // utilização do realloc
    n = 5;
    
    v = realloc(v, n * sizeof(int));

    // nova entrada de números
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    printf("Nova saida\n");
    // nova saída de números
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    free(v);
}