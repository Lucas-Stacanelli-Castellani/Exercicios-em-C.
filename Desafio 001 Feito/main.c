#include <stdio.h>
#include <stdlib.h>

int metodosdepagamentos(){
    int tiposdepagamentos;
    printf("Metodos de pagamento:\n");
    printf("\n1 - A vista. \n2 - Em duas vezes. \n3 - De 3x ate 10x.\n");
    scanf("%d",&tiposdepagamentos);
    printf("\n\n");
    return(tiposdepagamentos);
}

float primeiraOpcao(float valor){
    printf("\nTotal : R$ %.2f",valor);
    printf("\nA vista com desconto de 10 POR CENTO fica no valor de: R$ %.2f",valor*0.9);
    return(0);
}

float segundaOpcao(float valor){
    printf("\nTotal : %.2f R$",valor);
    printf("Em duas vezes, cada parcela sai no valor de: R$ %.2f cada.\n",valor/2);
    return(0);
}

float terceiraOpcao(float valor){
    int cont;
    printf("\nTotal : %.2f R$",valor);
    do{
        printf("Quantidade de parcelas.\n");
        scanf("%d",&cont);

    }while((cont >10)||(cont < 3));
    printf("%d parcelas no valor de R$ %.2f cada uma.\n",cont,(valor * 1.03)/cont);
    return(0);
}


int main(){

    float valortotal;

    printf("Digite o valor total da compra: \n");
    scanf("%f",&valortotal);

    printf("\n\n");

    switch(metodosdepagamentos()){
        case 1:
            printf("A vista.\n");
            primeiraOpcao(valortotal);
            break;
        case 2:
            printf("Em 2x.\n");
            segundaOpcao(valortotal);
            break;
        case 3:
            printf("De 3x ate 10x.\n");
            terceiraOpcao(valortotal);
            break;
        default:
            printf("Compra cancelada\n");
    }
    return(0);
}

