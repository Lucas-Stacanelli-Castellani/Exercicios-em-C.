//Faça um programa que preenche uma matriz 4x4 com o produto do valor da linha e da coluna de cada elemento. Em seguida imprima na tela a matriz.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4];
    int l,c;

    printf("\nProduto das posicoes:\n\n");

    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            m[l][c]=l*c;
        }
    }
    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            printf("%d \t",m[l][c]);
        }
        printf("\n");
    }
    return 0;
}
