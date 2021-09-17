#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define VALOR 100000

int main(void)
{
    FILE *arq;
    int r1, r2;
    char *x;
    char c;
    char l[100];

    printf("Deseja ver os numeros gerados? Tecle 1 - SIM e 2 - NAO.\n");
    scanf("%i",&r1);

    if(r1==1){
        arq = fopen("arquivo-sys.txt", "r"); 
        
        for(int i = 0; i < VALOR; i++){
            x = fgets(l, 100, arq);
            printf("Linha %d: %s \n", i+1, l);
        }
        fclose(arq);
    }else if (r1==2){
        printf("OK! Encerrando por aqui.\n");
    }else{
        printf("Opcao invalida!\n");
    }

    arq = fopen("arquivo-sys.txt", "r");
    
    do{
      c = fgetc(arq);
      printf("%c\n" , c);
    }while (c != EOF);

    return 0;
}