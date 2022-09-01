//Leia uma matriz 4x4,conte e escreva quantos valores maiores que 10 ela possui.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int linha,col,cont;
    for(linha=0;linha<4;linha++){
        for(col=0;col<4;col++){
            printf("%d ",m[linha][col]);
        }
            printf("\n");
    }
    for(linha=0;linha<4;linha++){
        for(col=0;col<4;col++){
            if(m[linha][col]>10){
            cont++;
            printf("\nO numero %d e maior que 10",m[linha][col]);
            }
        }
    }
    printf("\nA matriz possui %d valores maiores que 10.",cont);

    return 0;
}
