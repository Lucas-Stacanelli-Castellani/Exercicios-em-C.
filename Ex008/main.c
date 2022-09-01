//Leia uma matriz de 3x3 elementos. Calcule a soma dos elementos que estao acima da diagonal principal.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3]={1,2,3,4,5,6,7,8,9};
    int l,c,cont;
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            printf(" %d ",m[l][c]);
            if(l<c){
                cont=cont+m[l][c];
            }
        }
        printf("\n");
    }
    printf("\nA soma dos elementos acima da diagonal principal sera: %d",cont);

    return 0;
}
