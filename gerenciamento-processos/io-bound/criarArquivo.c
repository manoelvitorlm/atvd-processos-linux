#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define VALOR 100000

void consulta()
{
    FILE *arq;
    int entrada;

    arq = fopen("arquivo-sys.txt", "w");
    srand(time(NULL));

    if(arq==NULL)
        printf("Arquivo nao pode ser aberto.\n");
    
    for(int i = 0; i < VALOR; i++){
        entrada = fprintf(arq, "%i\n", rand() % VALOR);
        if(entrada==EOF)
            printf("Erro de gravacao!");
    }
}

int main(void)
{
    consulta();
    return 0;
}