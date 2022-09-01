//Gerar e imprimir uma matriz de tamanho 10x10, onde seus elementos sao da forma:
// A[i][j]=2i+7j-2 se i<j , a[i][j]=3i²-1 se i=j , a[i][j]=4i³-5j²+1 se i>j.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz [10][10];
    int l,c;

    for(l=0;l<10;l++){
        for(c=0;c<10;c++){
            if(l<c){
                matriz[l][c]= ((2*l)+(7*c))-2;
            }
            if(l==c){
                matriz[l][c] = ((3*l)*(3*l))-1;
            }
            if(l>c){
                matriz[l][c]=((4*l)*(4*l)*(4*l))-((5*c)*(5*c))+1;
            }
        }
    }

    for(l=0;l<10;l++){
        for(c=0;c<10;c++){
            printf(" |%d| ",matriz[l][c]);
        }
        printf("\n");
    }
    return 0;
}
