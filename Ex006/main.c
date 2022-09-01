//Leia duas matrizes 4x4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[4][4],m2[4][4],m3[4][4];
    int l,c;

    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            printf("m1[%d][%d]= ",l,c);
            scanf("%d",&m1[l][c]);
        }
    }
    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
        printf("%d ",m1[l][c]);
        }
        printf("\n");
    }

    printf("\n");

    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            printf("m2[%d][%d]= ",l,c);
            scanf("%d",&m2[l][c]);
        }
    }
    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            printf("%d ",m2[l][c]);
        }
        printf("\n");
    }




    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            if(m1[l][c]>m2[l][c]){
                    m3[l][c]=m1[l][c];
            }
            else{
                m3[l][c]=m2[l][c];
            }
        printf("\n");
        printf("\nO maior valor da posicao [%d][%d] = %d \n",l,c,m3[l][c]);
        }
    }

    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            printf("%d ",m3[l][c]);
        }
        printf("\n");
    }
    return 0;
}
