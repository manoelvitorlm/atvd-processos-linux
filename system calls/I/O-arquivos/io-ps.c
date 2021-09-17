#include <stdlib.h>
#include <stdio.h>

void entrada_e_saida()
{
    int x, y, soma;

    printf("Soma de dois inteiros.\n");


    printf("Primeiro inteiro: ");
    scanf("%i", &x);

    printf("Segundo inteiro: ");
    scanf("%i", &y);

    soma = x + y;

    printf("O resultado eh %i.\n", soma);

    return 0;

}

int main(void)
{
    entrada_e_saida();
}