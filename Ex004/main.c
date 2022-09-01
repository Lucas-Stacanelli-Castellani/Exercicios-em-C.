//Leia uma matriz 4x4, imprima a matriz e retorne a localização(linha e coluna) do maior valor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int l,c,maior,linha=0,coluna=0;

    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            printf("%d ",m[l][c]);
        }
            printf("\n");
    }
    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            if(m[l][c]>maior){
                maior=m[l][c];
                linha=l+1;
                coluna=c+1;
            }
       }
    }
    printf("\nO maior valor da matriz e %d, e esta na linha %d e coluna %d",maior,linha,coluna);


    return 0;
}
