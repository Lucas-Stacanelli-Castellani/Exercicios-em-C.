//Declare uma matriz 5x5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obitida.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5];
    int l,c;

    printf("\nSe o valor da linha for igual o valor da coluna, digite 1\n");

    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
            printf("Valor da linha %d e coluna %d: ",l,c);
            scanf("%d",&m[l][c]);
            }
            printf("\n");
    }
    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
            printf("%d",m[l][c]);
        }
        printf("\n");
    }

    return 0;
}

